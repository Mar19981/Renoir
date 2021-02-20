#pragma once
#include <QImage>
namespace renoir
{
	class Fractal
	{
	protected:
		QImage img;
		int width, height, iterations;
	public:
		Fractal(const int _width, const int _height, const int iter);
		virtual void generate() = 0;
		QImage getImage();
	};
}

