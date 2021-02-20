#include "RasterLayer.h"

namespace renoir
{
	void RasterLayer::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
	{
		painter->setCompositionMode(blendingMode);
		QGraphicsPixmapItem::paint(painter, option, widget);
	}
	void RasterLayer::mousePressEvent(QGraphicsSceneMouseEvent* event)
	{
		if (event->button() == Qt::LeftButton)
		{
			if (activeBrush)
			{
				position = event->pos();
				painting = true;
			}
			else if (flags() & QGraphicsItem::ItemIsMovable)
				position = event->scenePos();
		}
	}
	void RasterLayer::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
	{
		if (activeBrush && active && !locked)
		{
			drawLineTo(event->pos());
			painting = false;
		}
	}
	void RasterLayer::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
	{
		if (active && !locked)
		{
			if (painting && activeBrush)
			{
				drawLineTo(event->pos());
			}
			else if (flags() & QGraphicsItem::ItemIsMovable)
			{
				auto currentPos = event->scenePos();
				double dx = currentPos.x() - position.x(),
					dy = currentPos.y() - position.y();
				moveBy(dx, dy);
				position = currentPos;
			}
		}
	}
	RasterLayer::RasterLayer(const QPixmap& pixmap, QGraphicsItem* parent) : QGraphicsPixmapItem(pixmap, parent), Layer(LayerType::RASTER), map(pixmap.toImage()),
		painting(false)
	{
	}
	void RasterLayer::setActiveBrush(Brush* brush)
	{
		activeBrush = brush;
	}
	void RasterLayer::setBlendingMode(BlendingMode mode)
	{
		Layer::setBlendingMode(mode);
		update();
	}
	void RasterLayer::setIndex(double value)
	{
		index = value;
		setZValue(value);
	}
	void RasterLayer::updatePixmap(QImage& img)
	{
		map = img;
		setPixmap(QPixmap::fromImage(img));
	}
	void RasterLayer::toogleVisibility()
	{
		hidden = !hidden;
		if (isVisible())
			setVisible(false);
		else
			setVisible(true);
	}
	QPixmap RasterLayer::getPixmap()
	{
		QPixmap out = QGraphicsPixmapItem::pixmap();
		return out;
	}
	void RasterLayer::clearLayer()
	{
	}
	void RasterLayer::fillLayer(QColor& fill)
	{
		map.fill(fill);
		setPixmap(QPixmap::fromImage(map));
	}
	void RasterLayer::setPen(QPen& pen)
	{
	}
	void RasterLayer::setText(QString& txt)
	{
	}
	void RasterLayer::setPoint(QPointF& pos)
	{
		setPos(pos);
	}
	void RasterLayer::setRect(QRectF rect)
	{
	}
	void RasterLayer::setFont(QFont& font)
	{
	}
	QBrush RasterLayer::getBrush()
	{
		throw std::runtime_error("Can't get the brush from this object!\n");
	}
	QPen RasterLayer::getPen()
	{
		throw std::runtime_error("Can't get the pen from this object!\n");
	}
	QString RasterLayer::getText()
	{
		throw std::runtime_error("Can't get the text from this object!\n");
	}
	QPointF RasterLayer::getPoint()
	{
		return pos();
	}
	QRectF RasterLayer::getRect()
	{
		throw std::runtime_error("Can't get the rectangle from this object!\n");
	}
	QFont RasterLayer::getFont()
	{
		throw std::runtime_error("Can't get the font from this object!\n");
	}
	void RasterLayer::setMovable(bool value)
	{
		setFlag(QGraphicsItem::GraphicsItemFlag::ItemIsMovable, value);
	}
	void RasterLayer::drawLineTo(QPointF& point, double pressure)
	{
		QPainter painter(&map);
		QPen pen = activeBrush->getQPen();
		int adjSize = activeBrush->getSize() * pressure;
		painter.setCompositionMode(activeBrush->getMode());
		pen.setWidth(adjSize);
		painter.setPen(pen);
		if (activeBrush) {}
		painter.drawLine(position, point);
		int radious = adjSize / 2 + 2;
		setPixmap(QPixmap::fromImage(map));
		update(QRectF(position, point).normalized().adjusted(-radious, -radious, radious, radious));
		position = point;
	}
}