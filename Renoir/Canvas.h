#pragma once
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include "Rectangle.h"
#include "Ellipse.h"
#include <QPen>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include "Layer.h"
#include "Brush.h"
#include "Eraser.h"
#include "Text.h"
#include "RasterLayer.h"
#include <iostream>
#include <deque>
#include <limits>
#include <regex>
namespace renoir
{
	class Canvas : public QWidget
	{
		QString name;
		const static float SCALE_FACTOR;
		int width, height;
		Brush brush;
		Eraser eraser;
		std::deque<std::shared_ptr<Layer>> layers;
		std::shared_ptr<Layer> activeLayer;
		QGraphicsScene* scene;
		std::unique_ptr<QGraphicsView> view;
		QGraphicsRectItem* frameItem;
		Tool tool;

		void viewSetup(QSize canvasSize);
	public:
		Canvas(int w, int h, QColor& color, QSize canvasSize, QColor& bg, QString _name);
		Canvas(QImage& img, QColor& color, QSize canvasSize, QString _name);
		~Canvas();
		Brush& getBrush();
		Brush* getActiveBrush();
		void setTool(Tool type);
		int getCanvasWidth();
		int getCanvasHeight();
		void zoomIn();
		void zoomOut();
		void moveLayerUp(int i);
		void addRectangle(Rectangle* rect);
		void addEllipse(Ellipse* ell);
		void addText(Text* txt);
		void addBlankLayer(QColor& bg = QColor(0, 0, 0, 0));
		void removeLayer(int i);
		void moveLayerDown(int i);
		void setLayerBlendingMode(BlendingMode mode);
		void setActiveLayer(int i);
		void hideLayer();
		void lockLayer();
		QPixmap renderScene();
		void updateShape(QRectF& rect, QColor& color, QPen& pen);
		void updateRasterLayer(QImage& img);
		void updateText(QString& txt, QFont& font, QPointF& pos, QColor& fill, QPen& pen);
		QPixmap getActiveLayerPixmap();
		void addNewLayer(QImage& img);
		LayerType getActiveLayerType();
		QRectF getActiveLayerRect();
		QPointF getActiveLayerPosPoint();
		QString getActiveLayerText();
		QFont getActiveLayerFont();
		QColor getActiveLayerFillColor();
		QColor getActiveLayerOutlineColor();
		int getActiveLayerOutlineWidth();
		int getActiveLayerBlendingMode();
		QString getDocumentName();
		void saveLayersAsSequence(QString& path);
		void fillLayer();
	};
}

