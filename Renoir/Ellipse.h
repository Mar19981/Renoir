#pragma once
#include <QGraphicsEllipseItem>
#include <iostream>
#include "Layer.h"
#include "Brush.h"
namespace renoir
{
	class Ellipse : public Layer, public QGraphicsEllipseItem
	{
	public:
		Ellipse(const QRectF& rect, QGraphicsItem* parent = nullptr);
		void setIndex(double value);
		void setBlendingMode(BlendingMode mode);
		void setActiveBrush(Brush* brush);
		void setMovable(bool value);
		void toogleVisibility();
		void updatePixmap(QImage& img);
		QPixmap getPixmap();
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
	protected:
		void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget = nullptr);
		void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
	};

}

