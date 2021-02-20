#pragma once
#include <QImage>
#include <memory>
#include <iostream>
#include "functions.h"
#include "Fractal.h"
namespace renoir
{
	class Mandelbrot : public Fractal
	{
	protected:
		float scale;
	public:
		Mandelbrot(int _width, int _height, int iter, float _scale);
		virtual void generate();
	};
}

