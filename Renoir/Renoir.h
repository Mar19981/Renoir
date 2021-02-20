#pragma once
#include "enums.h"
#include <QtWidgets/QMainWindow>
#include <QDesktopWidget>
#include <QImageWriter>
#include <QCloseEvent>
#include <memory>
#include <fstream>
#include <iostream>
#include <QFileDialog>
#include "PixmapExport.h"
#include "DitherDialog.h"
#include "KernelDialog.h"
#include "SharpenDialog.h"
#include "TresholdDialog.h"
#include "Canvas.h"
#include "EdgeDetectionDialog.h"
#include "GaussianBlurDialog.h"
#include "Base64ExportDialog.h"
#include "NewFileDialog.h"
#include "MandelbrotDialog.h"
#include "NoiseDialog.h"
#include "JuliaDialog.h"
#include "brushSizeDialog.h"
#include "setLayerNameDialog.h"
#include "RectangleSettingsDialog.h"
#include "EllipseSettingsDialog.h"
#include "TextSettingsDialog.h"
#include "LSystemDialog.h"
#include "ui_Renoir.h"
namespace renoir
{
	class Renoir : public QMainWindow
	{
		Q_OBJECT

	public:
		Renoir(QWidget *parent = Q_NULLPTR);
		~Renoir();
	protected:
		virtual void closeEvent(QCloseEvent* event);

	private:
		Ui::RenoirClass ui;
		std::unique_ptr<QDialog> dialog;
		Canvas* canvas;
		bool changed;
		unsigned int newLayerNumber;
		void addLayerToList(std::string name = "New Layer ");
	private slots:
		void on_actionPortable_anymap_triggered();
		void on_actionAbout_Qt_triggered();
		void on_actionSave_as_triggered();
		void on_actionDither_triggered();
		void on_actionKernel_triggered();
		void on_actionSharpen_triggered();
		void on_actionTreshold_triggered();
		void on_actionEdge_detect_triggered();
		void on_actionGaussian_blur_triggered();
		void on_actionBase64_triggered();
		void on_actionClose_triggered();
		void on_actionSave_triggered();
		void on_actionOpen_triggered();
		void on_actionNew_triggered();
		void on_actionMandelbrot_triggered();
		void on_actionJulia_triggered();
		void on_actionLSystem_triggered();
		void on_actionNoise_triggered();
		void on_color_clicked();
		void on_alphaSpin_valueChanged(double i);
		void on_actionBrush_size_triggered();
		void on_actionBrush_triggered();
		void on_actionEraser_triggered();
		void on_actionMove_triggered();
		void on_actionRectangle_triggered();
		void on_actionEllipse_triggered();
		void on_actionText_triggered();
		void on_actionZoom_in_triggered();
		void on_actionZoom_out_triggered();
		void on_actionFill_triggered();
		void on_newButton_clicked();
		void on_lockButton_clicked();
		void on_removeButton_clicked();
		void on_upButton_clicked();
		void on_downButton_clicked();
		void on_comboBox_activated(int i);
		void on_renameButton_clicked();
		void on_hideButton_clicked();
		void setActiveLayer(int index);
		void on_actionShape_properties_triggered();
		void on_actionText_properties_triggered();
		void on_actionInsert_triggered();
		void on_actionImage_sequence_triggered();
	public slots:
		void receiveFilter(Filter* filter);
		void receiveGeneratedMap(QImage map);
		void changeBrushSize(int size);
		void createBase64Output(std::string& txt);
		void createNewFile(int width, int height, QColor& bg, QString& name);
		void receiveNewLayerName(QString& name);
		void textEvent(QFont& font, QString& txt, QColor& fill, QColor& outlineColor, unsigned int outlineSize, QPointF& pos);
		void rectangleEvent(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize);
		void updateShape(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize);
		void updateText(QFont& font, QString& txt, QColor& fill, QColor& outlineColor, unsigned int outlineSize, QPointF& pos);
		void ellipseEvent(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize);
	};

}
