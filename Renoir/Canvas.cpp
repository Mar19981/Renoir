#include "Canvas.h"
namespace renoir
{
	const float Canvas::SCALE_FACTOR = 0.1f;
	void Canvas::viewSetup(QSize canvasSize)
	{
		view = std::make_unique<QGraphicsView>(this);
		frameItem = new QGraphicsRectItem(QRectF(0, 0, width, height));
		frameItem->setVisible(true);
		frameItem->setPen(QPen(Qt::white));
		frameItem->setZValue(std::numeric_limits<int>::max());
		setGeometry(canvasSize.width() * 0.07, canvasSize.height() * 0.1, canvasSize.width() * 0.7, canvasSize.height() * 0.9);
		view->setGeometry(0, 0, canvasSize.width() * 0.7, canvasSize.height() * 0.9);
		view->setMouseTracking(true);
		view->setTabletTracking(true);
		scene = new QGraphicsScene(0, 0, width, height, this);
		view->setScene(scene);
		scene->setBackgroundBrush(QBrush(Qt::transparent));
		scene->addItem(frameItem);
		view->setBackgroundBrush(QBrush(Qt::black));
	}
	Canvas::Canvas(int w, int h, QColor& color, QSize canvasSize, QColor& bg, QString _name) : width(w), height(h), brush(Brush(color, 20)), eraser(Eraser(20)),
		tool(Tool::MOVE), scene(nullptr), view(nullptr), name(_name), frameItem(nullptr)
	{
		viewSetup(canvasSize);
		addBlankLayer(bg);
	}
	Canvas::Canvas(QImage& img, QColor& color, QSize canvasSize, QString _name): width(img.width()), height(img.height()), brush(Brush(color, 20)), eraser(Eraser(20)),
		tool(Tool::MOVE), scene(nullptr), view(nullptr), name(_name), frameItem(nullptr)
	{
		viewSetup(canvasSize);
		addNewLayer(img);
	}
	Canvas::~Canvas()
	{
	}
	Brush& Canvas::getBrush()
	{
		return brush;
	}
	Brush* Canvas::getActiveBrush()
	{
		return activeLayer->getActiveBrush();
	}
	void Canvas::setTool(Tool type)
	{
		tool = type;
		switch (type)
		{
		case Tool::MOVE: {
			activeLayer->setMovable(true);
			activeLayer->setActiveBrush(nullptr);
		}; break;
		case Tool::BRUSH: {
			activeLayer->setMovable(false);
			activeLayer->setActiveBrush(&brush);
		}; break;
		case Tool::ERASER: {
			activeLayer->setMovable(false);
			activeLayer->setActiveBrush(&eraser);
		}; break;
		default: {
			activeLayer->setMovable(false);
			activeLayer->setActiveBrush(nullptr); };
		}
	}
	int Canvas::getCanvasWidth()
	{
		return width;
	}
	int Canvas::getCanvasHeight()
	{
		return height;
	}
	void Canvas::zoomIn()
	{
		view->scale(SCALE_FACTOR + 1.0, SCALE_FACTOR + 1.0);
	}
	void Canvas::zoomOut()
	{
		view->scale(1.0 - SCALE_FACTOR, 1.0 - SCALE_FACTOR);
	}
	void Canvas::moveLayerUp(int i)
	{
		int exchangeIndex = i - 1;
		double zIndexHigher = layers.at(exchangeIndex)->getIndex(),
			zIndexLower = layers.at(i)->getIndex();
		layers.at(i)->setIndex(zIndexHigher);
		layers.at(exchangeIndex)->setIndex(zIndexLower);
		std::swap(layers.at(i), layers.at(exchangeIndex));
		setActiveLayer(i);
	}
	void Canvas::addRectangle(Rectangle* rect)
	{
		std::shared_ptr<Rectangle> newLayer(rect);
		scene->addItem(rect);
		frameItem->childItems().append(newLayer.get());
		newLayer->setIndex(layers.size());
		if (tool == Tool::MOVE)
			newLayer->setMovable(true);
		activeLayer->setActive(false);
		layers.push_front(newLayer);
		activeLayer = newLayer;
		activeLayer->setActive(true);
	}
	void Canvas::addEllipse(Ellipse* ell)
	{
		std::shared_ptr<Ellipse> newLayer(ell);
		scene->addItem(ell);
		newLayer->setIndex(layers.size());
		frameItem->childItems().append(newLayer.get());
		if (tool == Tool::MOVE)
			newLayer->setMovable(true);
		activeLayer->setActive(false);
		layers.push_front(newLayer);
		activeLayer = newLayer;
		activeLayer->setActive(true);
	}
	void Canvas::addText(Text* txt)
	{
		std::shared_ptr<Text> newLayer(txt);
		scene->addItem(txt);
		frameItem->childItems().append(newLayer.get());
		newLayer->setIndex(layers.size());
		if (tool == Tool::MOVE)
			newLayer->setMovable(true);
		activeLayer->setActive(false);
		layers.push_front(newLayer);
		activeLayer = newLayer;
		activeLayer->setActive(true);
	}
	void Canvas::addBlankLayer(QColor& bg)
	{
		QImage img(width, height, QImage::Format::Format_ARGB32);
		if (bg != QColor(0, 0, 0, 0))
			img.fill(bg);
		std::shared_ptr<RasterLayer> layer = std::make_shared<RasterLayer>(QPixmap::fromImage(img));
		layer->setIndex(layers.size());
		layers.push_front(layer);
		if (tool == Tool::BRUSH)
			layer->setActiveBrush(&brush);
		else if (tool == Tool::ERASER)
			layer->setActiveBrush(&eraser);
		else if (tool == Tool::MOVE)
			layer->setMovable(true);
		scene->addItem(layer.get());
		frameItem->childItems().append(layer.get());
		if (activeLayer)
			activeLayer->setActive(false);
		activeLayer = layer;
	}
	void Canvas::removeLayer(int i)
	{
		auto it = layers.begin();
		activeLayer = nullptr;
		std::advance(it, i);
		QGraphicsItem* toRemove = reinterpret_cast<RasterLayer*>(layers.at(i).get());
		frameItem->childItems().removeOne(toRemove);
		delete toRemove;
		layers.erase(it);
		std::clog << layers.size();
		activeLayer = layers.at(0);
	}
	void Canvas::moveLayerDown(int i)
	{
		int exchangeIndex = i + 1;
		double zIndexLower = layers.at(exchangeIndex)->getIndex(),
			zIndexHigher = layers.at(i)->getIndex();
		layers.at(i)->setIndex(zIndexLower);
		layers.at(exchangeIndex)->setIndex(zIndexHigher);
		std::swap(layers.at(i), layers.at(exchangeIndex));
		setActiveLayer(i);
	}
	void Canvas::setLayerBlendingMode(BlendingMode mode)
	{
		activeLayer->setBlendingMode(mode);
	}

	void Canvas::setActiveLayer(int i)
	{
		activeLayer->setActive(false);
		activeLayer = layers.at(i);
		activeLayer->setActive(true);
		if (tool == Tool::BRUSH)
			activeLayer->setActiveBrush(&brush);
		else if (tool == Tool::ERASER)
			activeLayer->setActiveBrush(&eraser);
		else if (tool == Tool::MOVE)
			activeLayer->setMovable(true);

	}

	void Canvas::hideLayer()
	{
		activeLayer->toogleVisibility();
	}

	void Canvas::lockLayer()
	{
		activeLayer->toogleLocked();
	}

	QPixmap Canvas::renderScene()
	{
		QPixmap output(width, height);
		frameItem->setVisible(false);
		QPainter painter(&output);
		scene->render(&painter, QRectF(0, 0, width, height), QRectF(0, 0, width, height));
		frameItem->setVisible(true);
		return output;
	}

	void Canvas::updateShape(QRectF& rect, QColor& color, QPen& pen)
	{
		if (activeLayer->getLayerType() == LayerType::RECTANGLE || activeLayer->getLayerType() == LayerType::ELLIPSE)
		{
			activeLayer->setRect(rect);
			activeLayer->fillLayer(color);
			activeLayer->setPen(pen);
		}
	}

	void Canvas::updateRasterLayer(QImage& img)
	{
		if (activeLayer->getLayerType() == LayerType::RASTER)
		{
			activeLayer->updatePixmap(img);
		}
	}

	void Canvas::updateText(QString& txt, QFont& font, QPointF& pos, QColor& fill, QPen& pen)
	{
		if (activeLayer->getLayerType() == LayerType::TEXT)
		{
			activeLayer->setText(txt);
			activeLayer->fillLayer(fill);
			activeLayer->setPen(pen);
			activeLayer->setPoint(pos);
			activeLayer->setFont(font);
		}
	}

	QPixmap Canvas::getActiveLayerPixmap()
	{
		if (activeLayer->getLayerType() == LayerType::RASTER)
		{
			return activeLayer->getPixmap();
		}
	}

	void Canvas::addNewLayer(QImage& img)
	{
		std::shared_ptr<RasterLayer> layer = std::make_shared<RasterLayer>(QPixmap::fromImage(img));
		layer->setIndex(layers.size());
		layers.push_front(layer);
		if (tool == Tool::BRUSH)
			layer->setActiveBrush(&brush);
		else if (tool == Tool::ERASER)
			layer->setActiveBrush(&eraser);
		else if (tool == Tool::MOVE)
			layer->setMovable(true);
		scene->addItem(layer.get());
		frameItem->childItems().append(layer.get());
		if (activeLayer)
			activeLayer->setActive(false);
		activeLayer = layer;
	}

	LayerType Canvas::getActiveLayerType()
	{
		return activeLayer->getLayerType();
	}

	QRectF Canvas::getActiveLayerRect()
	{
		if (activeLayer->getLayerType() == LayerType::RECTANGLE || activeLayer->getLayerType() == LayerType::ELLIPSE)
			return activeLayer->getRect();
	}

	QPointF Canvas::getActiveLayerPosPoint()
	{
		if (activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getPoint();
	}

	QString Canvas::getActiveLayerText()
	{
		if (activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getText();
	}

	QFont Canvas::getActiveLayerFont()
	{
		if (activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getFont();
	}

	QColor Canvas::getActiveLayerFillColor()
	{
		if (activeLayer->getLayerType() == LayerType::RECTANGLE || activeLayer->getLayerType() == LayerType::ELLIPSE
			|| activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getBrush().color();
	}

	QColor Canvas::getActiveLayerOutlineColor()
	{
		if (activeLayer->getLayerType() == LayerType::RECTANGLE || activeLayer->getLayerType() == LayerType::ELLIPSE
			|| activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getPen().color();
	}

	int Canvas::getActiveLayerOutlineWidth()
	{
		if (activeLayer->getLayerType() == LayerType::RECTANGLE || activeLayer->getLayerType() == LayerType::ELLIPSE
			|| activeLayer->getLayerType() == LayerType::TEXT)
			return activeLayer->getPen().width();
	}

	int Canvas::getActiveLayerBlendingMode()
	{
		return static_cast<int>(activeLayer->getBlendingMode());
	}

	QString Canvas::getDocumentName()
	{
		return name;
	}

	void Canvas::saveLayersAsSequence(QString& path)
	{
		std::regex reg(R"(^[A-Z]:[\/\\]+([A-z0-9-_+]+\/)*([A-z0-9]+\.(bmp|png|jpg|jpeg)))");
		std::smatch match;
		std::string pathStr = path.toStdString();
		std::string extension{};
		if (std::regex_match(pathStr, match, reg))
		{
			extension = "." + match[3].str();
		}
		pathStr = pathStr.substr(0, pathStr.length() - extension.length());
		auto initialLambda = [](std::shared_ptr<Layer> l) {
			if (!l->isHidden())
				l->toogleVisibility();
		};		
		auto finishLambda = [](std::shared_ptr<Layer> l) {
			if (l->isHidden())
				l->toogleVisibility();
		};
		std::for_each(layers.begin(), layers.end(), initialLambda);
		int frame{};
		for (int i = layers.size() - 1; i >= 0; i--)
		{
			layers.at(i)->toogleVisibility();
			std::string finalFilePath = pathStr + "[" + std::to_string(frame++) + "]" + extension;
			QPixmap output = renderScene();
			output.save(finalFilePath.c_str());
			layers.at(i)->toogleVisibility();
		}
		std::for_each(layers.begin(), layers.end(), finishLambda);

	}

	void Canvas::fillLayer()
	{
		activeLayer->fillLayer(brush.getColor());
	}


}