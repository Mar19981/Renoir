#include "Mandelbrot.h"

namespace renoir
{
	Mandelbrot::Mandelbrot(int _width, int _height, int iter, float _scale) : Fractal(_width, _height, iter), scale(_scale)
	{
	}
	void Mandelbrot::generate()
	{
		for (int x = 0; x < width; x++)
		{
			for (int y = 0; y < height; y++)
			{
				float a = remap<float>(x, 0.0f, width, -scale, scale),
					b = remap<float>(y, 0.0f, height, -scale, scale),
					initialA = a, initialB = b;
				int n{};
				while (n < iterations)
				{
					float tempA = a * a - b * b,
						tempB = 2.0f * a * b;
					a = tempA + initialA;
					b = tempB + initialB;
					if (a * a + b * b > 16.0f)
						break;
					n++;
				}
				int brightness = remap<float>(std::sqrt(remap<float>(n, 0.0f, iterations, 0.0f, 1.0f)), 0.0f, 1.0f, 0.0f, 255.0f);
				if (n == iterations)
					brightness = 0;
				img.setPixelColor(x, y, QColor(brightness, brightness, brightness));
			}
		}
	}
}
