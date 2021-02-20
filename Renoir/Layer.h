#pragma once
#include "Filter.h"
#include "enums.h"
#include "Brush.h"
#include <memory>
#include <QPainter>
namespace renoir
{
	class Layer
	{
		const LayerType type;
	protected:
		Brush* activeBrush;
		bool locked, active, hidden;
		QPainter::CompositionMode blendingMode;
		double index;

	public:
		Layer(LayerType t);
		void setActive(bool val);
		void toogleLocked();
		double getIndex() const;
		LayerType getLayerType() const;
		virtual void setIndex(double value) = 0;
		virtual void setMovable(bool value) = 0;
		virtual void setActiveBrush(Brush* brush) = 0;
		virtual void setBlendingMode(BlendingMode mode);
		Brush* getActiveBrush();
		BlendingMode getBlendingMode() const;
		virtual void toogleVisibility() = 0;
		virtual QPixmap getPixmap() = 0;
		virtual void updatePixmap(QImage& img) = 0;
		bool isHidden();
		virtual void fillLayer(QColor& fill) = 0;
		virtual void setPen(QPen& pen) = 0;
		virtual void setText(QString& txt) = 0;
		virtual void setPoint(QPointF& pos) = 0;
		virtual void setRect(QRectF rect) = 0;
		virtual void setFont(QFont& font) = 0;
		virtual QBrush getBrush() = 0;
		virtual QPen getPen() = 0;
		virtual QString getText() = 0;
		virtual QPointF getPoint() = 0;
		virtual QRectF getRect() = 0;
		virtual QFont getFont() = 0;
	};
}

