#include "Fractal.h"
namespace renoir
{
	Fractal::Fractal(const int _width, const int _height, const int iter): width(_width), height(_height), iterations(iter), img(QImage(_width, _height, QImage::Format::Format_ARGB32))
	{
	}
	QImage Fractal::getImage()
	{
		return img;
	}
}