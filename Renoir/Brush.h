#pragma once
#include <QColor>
#include <QPen>
#include <QPainter>
namespace renoir
{
	class Brush
	{
		QColor color;
		unsigned int size;
	protected:
		QPainter::CompositionMode mode;
	public:
		Brush(const QColor& c, const unsigned int s);
		void setColor(const QColor& value);
		QColor getColor() const;
		void setSize(const unsigned int value);
		unsigned int getSize() const;
		QPen getQPen();
		QPainter::CompositionMode getMode();
		virtual ~Brush() = default;
	};

}

