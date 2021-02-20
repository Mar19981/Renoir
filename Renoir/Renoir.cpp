#include "Renoir.h"
#include <QMessageBox>
namespace renoir
{
	Renoir::Renoir(QWidget* parent)
		: QMainWindow(parent), changed(false), canvas(nullptr), newLayerNumber(1)
	{
		ui.setupUi(this);
		auto size = QApplication::desktop()->screenGeometry();
		setGeometry(size);
		showMaximized();
		setFixedSize(QSize(size.width(), size.height()));
		QString styleSheet = changeStyleSheet(Qt::black).c_str();
		ui.color->setStyleSheet(styleSheet);
		auto centralWidgetSize = this->centralWidget()->size();
		ui.frame->setGeometry(centralWidgetSize.width() * 0.75,0, centralWidgetSize.width() * 0.25, centralWidgetSize.height()* 0.95);
		connect(ui.layers, SIGNAL(currentRowChanged(int)), this, SLOT(setActiveLayer(int)));

	}

	Renoir::~Renoir()
	{
		delete canvas;
		canvas = nullptr;
	}

	void Renoir::closeEvent(QCloseEvent* event)
	{
		if (changed)
		{
			auto ret = QMessageBox::information(this, "Close", "Do you want to close?", QMessageBox::Ok | QMessageBox::Cancel);
			if (ret == QMessageBox::Ok)
				event->accept();
			else
				event->ignore();
		}
	}

	void Renoir::addLayerToList(std::string name)
	{
		if (name == "New Layer ")
			name += std::to_string(newLayerNumber++);
		ui.layers->insertItem(0, name.c_str());
	}

	void Renoir::on_actionAbout_Qt_triggered()
	{
		QMessageBox::aboutQt(this, "About Qt");
	}

	void Renoir::on_actionSave_as_triggered()
	{
		if (canvas)
		{
			auto currentPath = std::filesystem::current_path().string() + R"(\)";
			currentPath += canvas->getDocumentName().toStdString();
			auto fileName = QFileDialog::getSaveFileName(this, "Save as", currentPath.c_str(), tr("JPG(*.jpg);;PNG(*.png);;Bitmap(*.bmp)"));
			QPixmap output = canvas->renderScene();
			output.save(fileName);

		}
	}

	void Renoir::on_actionOpen_triggered()
	{
		if (!canvas)
		{
			changed = true;
			auto currentPath = std::filesystem::current_path().string();
			auto file = QFileDialog::getOpenFileName(this, tr("Open file"), currentPath.c_str(), tr("Image(*.bmp *.gif *.jpg *.jpeg  *.ppm *pgm *pbm *.png);;Portable pixmap (*.ppm *pgm *pbm);;JPG(*jpg *jpeg);;PNG(*.png);;GIF(*.gif);;Bitmap(*.bmp)"));
			std::string name = file.toStdString();
			name = name.substr(name.rfind(R"(/)") + 1, name.length() - name.rfind(R"(/)"));
			std::string windowName = "Renoir - " + name;
			setWindowTitle(windowName.c_str());
			QImage img(file);
			QSize centralWidgetSize = centralWidget()->size();
			canvas = new Canvas(img, QColor(Qt::black), centralWidgetSize, name.c_str());
			addLayerToList("Background");
			layout()->addWidget(canvas);
		}
	}

	void Renoir::on_actionNew_triggered()
	{
		if (!canvas)
		{
			dialog = std::make_unique<NewFileDialog>(this);
			dialog->adjustSize();
			dialog->show();
		}
	}
	void Renoir::on_actionMandelbrot_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<MandelbrotDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();
		}
	}

	void Renoir::on_actionJulia_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<JuliaDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();
		}
	}

	void Renoir::on_actionLSystem_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<LSystemDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();
		}
	}

	void Renoir::on_actionNoise_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<NoiseDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();

		}
	}

	void Renoir::on_color_clicked()
	{
		QColor color = QColorDialog::getColor(Qt::white, this, "Pick color");
		QString styleSheet = changeStyleSheet(color).c_str();
		int opacity = remap<double>(ui.alphaSpin->value(), 0.0, 1.0, 0.0, 255.0);
		ui.color->setStyleSheet(styleSheet);
		ui.redSpin->setValue(color.red());
		ui.greenSpin->setValue(color.green());
		ui.blueSpin->setValue(color.blue());
		ui.hueSpin->setValue(color.hue());
		ui.saturationSpin->setValue(color.saturation());
		ui.valueSpin->setValue(color.value());
		if (canvas)
			canvas->getBrush().setColor(QColor(color.red(), color.green(), color.blue(), opacity));
	}

	void Renoir::on_alphaSpin_valueChanged(double i)
	{
		int opacity = remap<double>(i, 0.0, 1.0, 0.0, 255.0);
		QColor color(ui.redSpin->value(), ui.greenSpin->value(), ui.blueSpin->value(), opacity);
		if (canvas)
			canvas->getBrush().setColor(color);
	}

	void Renoir::on_actionBrush_size_triggered()
	{
		if (canvas)
		{
			Brush* brush = canvas->getActiveBrush();
			if (brush)
			{
				dialog = std::make_unique<BrushSizeDialog>(brush->getSize(), this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionBrush_triggered()
	{
		if (canvas)
			canvas->setTool(Tool::BRUSH);
	}

	void Renoir::on_actionEraser_triggered()
	{
		if (canvas)
			canvas->setTool(Tool::ERASER);
	}

	void Renoir::on_actionMove_triggered()
	{
		if (canvas)
			canvas->setTool(Tool::MOVE);
	}

	void Renoir::on_actionRectangle_triggered()
	{
		if (canvas)
		{
			canvas->setTool(Tool::RECTANGLE);
			dialog = std::make_unique<RectangleSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();

		}
	}

	void Renoir::on_actionEllipse_triggered()
	{
		if (canvas)
		{
			canvas->setTool(Tool::ELLIPSE);
			dialog = std::make_unique<EllipseSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->show();

		}
	}


	void Renoir::on_actionText_triggered()
	{
		if (canvas)
		{
			canvas->setTool(Tool::TEXT);
			dialog = std::make_unique<TextSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), this);
			dialog->adjustSize();
			dialog->show();

		}
	}

	void Renoir::on_actionZoom_in_triggered()
	{
		if (canvas)
			canvas->zoomIn();
	}

	void Renoir::on_actionZoom_out_triggered()
	{
		if (canvas)
			canvas->zoomOut();
	}

	void Renoir::on_actionFill_triggered()
	{
		if (canvas)
			canvas->fillLayer();
	}

	void Renoir::on_newButton_clicked()
	{
		if (canvas)
		{
			addLayerToList();
			canvas->addBlankLayer();

		}
	}

	void Renoir::on_lockButton_clicked()
	{
		if (canvas)
			canvas->lockLayer();
	}

	void Renoir::on_removeButton_clicked()
	{
		if (canvas)
		{
			if (ui.layers->count() > 1)
			{
				int itemToRemove = ui.layers->currentRow();
				delete ui.layers->takeItem(itemToRemove);
				canvas->removeLayer(itemToRemove);
			}

		}
	}

	void Renoir::on_upButton_clicked()
	{
		if (canvas)
		{
			if (ui.layers->count() > 1 && ui.layers->currentItem())
			{
				int currentRow = ui.layers->currentRow();
				if (currentRow)
				{
					QString currStr = ui.layers->currentItem()->text();
					ui.layers->currentItem()->setText(ui.layers->item(currentRow - 1)->text());
					ui.layers->item(currentRow - 1)->setText(currStr);
					canvas->moveLayerUp(currentRow);
					ui.comboBox->setCurrentIndex(canvas->getActiveLayerBlendingMode());

				}
			}
		}
	}

	void Renoir::on_downButton_clicked()
	{
		if (canvas)
		{
			if (ui.layers->count() > 1 && ui.layers->currentItem())
			{
				int currentRow = ui.layers->currentRow();
				if (currentRow + 1 != ui.layers->count())
				{
					QString currStr = ui.layers->currentItem()->text();
					ui.layers->currentItem()->setText(ui.layers->item(currentRow + 1)->text());
					ui.layers->item(currentRow + 1)->setText(currStr);
					canvas->moveLayerDown(currentRow);
					ui.comboBox->setCurrentIndex(canvas->getActiveLayerBlendingMode());
				}
			}
		}
	}

	void Renoir::on_comboBox_activated(int i)
	{
		if (canvas)
		{
			switch (i)
			{
			case 0: canvas->setLayerBlendingMode(BlendingMode::NORMAL); break;
			case 1: canvas->setLayerBlendingMode(BlendingMode::ADD); break;
			case 2: canvas->setLayerBlendingMode(BlendingMode::LIGHTEN); break;
			case 3: canvas->setLayerBlendingMode(BlendingMode::MULTIPLY); break;
			case 4: canvas->setLayerBlendingMode(BlendingMode::SCREEN); break;
			case 5: canvas->setLayerBlendingMode(BlendingMode::DARKEN); break;
			case 6: canvas->setLayerBlendingMode(BlendingMode::COLOR_DODGE); break;
			case 7: canvas->setLayerBlendingMode(BlendingMode::COLOR_BURN); break;
			case 8: canvas->setLayerBlendingMode(BlendingMode::OVERLAY); break;
			case 9: canvas->setLayerBlendingMode(BlendingMode::SOFT_LIGHT); break;
			case 10: canvas->setLayerBlendingMode(BlendingMode::HARD_LIGHT); break;
			case 11: canvas->setLayerBlendingMode(BlendingMode::DIFFERENCE); break;
			}
		}
	}

	void Renoir::on_renameButton_clicked()
	{
		if (ui.layers->count() && ui.layers->currentItem())
		{
			dialog = std::make_unique<SetLayerNameDialog>(ui.layers->currentItem()->text(), this);
			dialog->adjustSize();
			dialog->show();
		}
	}

	void Renoir::on_hideButton_clicked()
	{
		if (canvas)
		{
			canvas->hideLayer();
		}
	}

	void Renoir::setActiveLayer(int index)
	{
		if (canvas)
		{
			canvas->setActiveLayer(index);
			ui.comboBox->setCurrentIndex(canvas->getActiveLayerBlendingMode());
		}
	}

	void Renoir::on_actionShape_properties_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RECTANGLE)
			{
				dialog = std::make_unique<RectangleSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), canvas->getActiveLayerRect(),
					canvas->getActiveLayerFillColor(), canvas->getActiveLayerOutlineColor(), canvas->getActiveLayerOutlineWidth(), this);
				dialog->adjustSize();
				dialog->show();				
			}
			else if (canvas->getActiveLayerType() == LayerType::ELLIPSE)
			{
				dialog = std::make_unique<EllipseSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), canvas->getActiveLayerRect(),
					canvas->getActiveLayerFillColor(), canvas->getActiveLayerOutlineColor(), canvas->getActiveLayerOutlineWidth(), this);
				dialog->adjustSize();
				dialog->show();

			}
		}
	}

	void Renoir::on_actionText_properties_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::TEXT)
			{
				dialog = std::make_unique<TextSettingsDialog>(canvas->getCanvasWidth(), canvas->getCanvasHeight(), canvas->getActiveLayerText(),
					canvas->getActiveLayerFont(), canvas->getActiveLayerPosPoint(), canvas->getActiveLayerFillColor(), 
					canvas->getActiveLayerOutlineColor(), canvas->getActiveLayerOutlineWidth(), this);
				dialog->adjustSize();
				dialog->show();
			}
		}
	}

	void Renoir::on_actionInsert_triggered()
	{
		if (canvas)
		{
			auto currentPath = std::filesystem::current_path().string();
			auto file = QFileDialog::getOpenFileName(this, tr("Open file"), currentPath.c_str(), tr("Image(*.bmp *.gif *.jpg *.jpeg  *.ppm *pgm *pbm *.png);;Portable pixmap (*.ppm *pgm *pbm);;JPG(*.jpg *.jpeg);;PNG(*.png);;GIF(*.gif);;Bitmap(*.bmp)"));
			QImage img(file);
			addLayerToList();
			canvas->addNewLayer(img);
		}
	}

	void Renoir::on_actionImage_sequence_triggered()
	{
		if (canvas)
		{
			auto currentPath = std::filesystem::current_path().string() + R"(\)";
			currentPath += canvas->getDocumentName().toStdString();
			auto fileName = QFileDialog::getSaveFileName(this, "Save as", currentPath.c_str(), tr("JPG(*.jpg);;PNG(*.png);;Bitmap(*.bmp)"));
			canvas->saveLayersAsSequence(fileName);
		}
	}


	void Renoir::receiveGeneratedMap(QImage map)
	{
		addLayerToList();
		canvas->addNewLayer(map);
	}

	void Renoir::changeBrushSize(int size)
	{
		Brush* brush = canvas->getActiveBrush();
		if (brush)
			brush->setSize(size);
	}

	void Renoir::createBase64Output(std::string& txt)
	{
		dialog = std::make_unique<Base64Output>(txt, this);
		dialog->adjustSize();
		dialog->show();
	}

	void Renoir::createNewFile(int width, int height, QColor& bg, QString& name)
	{
		if (name.isEmpty())
			name = "Untitled";
		setWindowTitle("Renoir - " + name);
		changed = true;
		QSize centralWidgetSize = centralWidget()->size();
		canvas = new Canvas(width, height, QColor(Qt::black), centralWidgetSize, bg, name);
		addLayerToList("Background");
		layout()->addWidget(canvas);
	}

	void Renoir::receiveNewLayerName(QString& name)
	{
		ui.layers->currentItem()->setText(name);
	}

	void Renoir::textEvent(QFont& font, QString& txt, QColor& fill, QColor& outlineColor, unsigned int outlineSize, QPointF& pos)
	{
		Text* txtObj = new Text(txt);
		QBrush brush(fill.rgba());
		QPen pen(outlineColor.rgba());
		pen.setWidth(outlineSize);
		txtObj->setBrush(brush);
		txtObj->setPen(pen);
		txtObj->setFont(font);
		txtObj->setPos(pos);
		addLayerToList(txt.toStdString());
		canvas->addText(txtObj);
	}

	void Renoir::rectangleEvent(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize)
	{
		Rectangle* rectangle = new Rectangle(rect);
		QBrush brush(fill.rgba());
		QPen pen(outlineColor.rgba());
		pen.setWidth(outlineSize);
		rectangle->setBrush(brush);
		rectangle->setPen(pen);
		addLayerToList();
		canvas->addRectangle(rectangle);
	}

	void Renoir::updateShape(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize)
	{
		QPen pen(outlineColor);
		pen.setWidth(outlineSize);
		canvas->updateShape(rect, fill, pen);
	}

	void Renoir::updateText(QFont& font, QString& txt, QColor& fill, QColor& outlineColor, unsigned int outlineSize, QPointF& pos)
	{
		QPen pen(outlineColor);
		pen.setWidth(outlineSize);
		canvas->updateText(txt, font, pos, fill, pen);
	}


	void Renoir::ellipseEvent(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize)
	{
		Ellipse* ellipse = new Ellipse(rect);
		QBrush brush(fill.rgba());
		QPen pen(outlineColor.rgba());
		pen.setWidth(outlineSize);
		ellipse->setBrush(brush);
		ellipse->setPen(pen);
		addLayerToList();
		canvas->addEllipse(ellipse);
	}

	void Renoir::receiveFilter(Filter* filter)
	{
		filter->apply();
		QImage img = filter->getOutput();
		canvas->updateRasterLayer(img);
		delete filter;
	}

	void Renoir::on_actionSave_triggered()
	{
		if (canvas)
		{
			canvas->renderScene();
		}
	}	

	void Renoir::on_actionDither_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				dialog = std::make_unique<DitherDialog>(canvas->getActiveLayerPixmap(), this);
				dialog->adjustSize();
				dialog->show();
			}
		}
	}

	void Renoir::on_actionKernel_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				QPixmap map = canvas->getActiveLayerPixmap();
				dialog = std::make_unique<KernelDialog>(map, this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionSharpen_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				QPixmap map = canvas->getActiveLayerPixmap();
				dialog = std::make_unique<SharpenDialog>(map, this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionTreshold_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				QPixmap map = canvas->getActiveLayerPixmap();
				dialog = std::make_unique<TresholdDialog>(map, this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionEdge_detect_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				QPixmap map = canvas->getActiveLayerPixmap();
				dialog = std::make_unique<EdgeDetectionDialog>(map, this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionGaussian_blur_triggered()
	{
		if (canvas)
		{
			if (canvas->getActiveLayerType() == LayerType::RASTER)
			{
				QPixmap map = canvas->getActiveLayerPixmap();
				dialog = std::make_unique<GaussianBlurDialog>(map, this);
				dialog->adjustSize();
				dialog->show();
			}

		}
	}

	void Renoir::on_actionBase64_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<Base64ExportDialog>(canvas->renderScene(), this);
				dialog->adjustSize();
			dialog->show();
		}
	}

	void Renoir::on_actionClose_triggered()
	{
		this->~Renoir();
		exit(0);
	}


	void Renoir::on_actionPortable_anymap_triggered()
	{
		if (canvas)
		{
			dialog = std::make_unique<PixmapExport>(canvas->renderScene(), this);
			dialog->adjustSize();
			dialog->show();
		}
	}
}

