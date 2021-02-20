#pragma once
#include "enums.h"
#include <QImage>
#include <memory>
#include <random>
namespace renoir
{
	class RandomNoise
	{
		int width, height;
		ColorMode mode;
		std::random_device rd;
		std::uniform_int_distribution<int> distr;
		QImage noise;
	public:
		RandomNoise(int _width, int _height, ColorMode m);
		void generate();
		QImage getNoise();
	};
}


