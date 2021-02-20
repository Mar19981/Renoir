#include "Eraser.h"
namespace renoir
{
	Eraser::Eraser(const unsigned int size) : Brush(QColor(0, 0, 0, 0), size)
	{
		mode = QPainter::CompositionMode::CompositionMode_Clear;
	}
}