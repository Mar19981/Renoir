#include "Brush.h"
namespace renoir
{
	Brush::Brush(const QColor& c, const unsigned int s) : color(c), size(s), mode(QPainter::CompositionMode::CompositionMode_Source)
	{
	}
	void Brush::setColor(const QColor& value)
	{
		color = value;
	}
	QColor Brush::getColor() const
	{
		return color;
	}
	void Brush::setSize(const unsigned int value)
	{
		size = value;
	}
	unsigned int Brush::getSize() const
	{
		return size;
	}
	QPen Brush::getQPen()
	{
		return QPen(color, size, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
	}
	QPainter::CompositionMode Brush::getMode()
	{
		return mode;
	}
}