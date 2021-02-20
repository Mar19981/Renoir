#pragma once
#include "Layer.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <iostream>
#include "Brush.h"
namespace renoir
{
	class RasterLayer : public QGraphicsPixmapItem, public Layer
	{
		bool painting;
		QImage map;
		QPointF position;
		void drawLineTo(QPointF& point, double pressure = 1.0);
	protected:
		void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
		void mousePressEvent(QGraphicsSceneMouseEvent* event);
		void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
		void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
	public:
		RasterLayer(const QPixmap& pixmap, QGraphicsItem* parent = nullptr);
		void setActiveBrush(Brush* brush);
		void setMovable(bool value);
		void setBlendingMode(BlendingMode mode);
		void setIndex(double value);
		void updatePixmap(QImage& img);
		void toogleVisibility();
		QPixmap getPixmap();
		void clearLayer();
		void fillLayer(QColor& fill);
		void setPen(QPen& pen);
		void setText(QString& txt);
		void setPoint(QPointF& pos);
		void setRect(QRectF rect);
		void setFont(QFont& font);
		QBrush getBrush();
		QPen getPen();
		QString getText();
		QPointF getPoint();
		QRectF getRect();
		QFont getFont();
	};
}