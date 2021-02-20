#include "RandomNoise.h"
namespace renoir
{
	RandomNoise::RandomNoise(int _width, int _height, ColorMode m): width(_width), height(_height), mode(m), distr(0,255), noise(QImage(width, height, QImage::Format::Format_ARGB32))
	{
	}
	void RandomNoise::generate()
	{
		switch (mode)
		{
		case ColorMode::GRAYSCALE: {
			for (int x = 0; x < width; x++)
			{
				for (int y = 0; y < height; y++)
				{
					int brightness = distr(rd);
					noise.setPixelColor(x, y, QColor(brightness, brightness, brightness));
				}
			}
		}; break;
		case ColorMode::COLOR: {
			for (int x = 0; x < width; x++)
			{
				for (int y = 0; y < height; y++)
				{
					int red = distr(rd),
						green = distr(rd),
						blue = distr(rd);
					noise.setPixelColor(x, y, QColor(red, green, blue));
				}
			}
		}; break;
		}
	}
	QImage RandomNoise::getNoise()
	{
		return noise;
	}
}