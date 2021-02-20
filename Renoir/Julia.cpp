#include "Julia.h"
namespace renoir
{

	Julia::Julia(int width, int height, int iter, float scale, std::complex<double> complexNumber):Mandelbrot(width, height, iter, scale), c(complexNumber)
	{
	}

	void Julia::generate()
	{
		float h = (scale * height) / static_cast<float>(width),
			xMin = -scale / 2.0f,
			yMin = -h / 2.0f,
			xMax = scale + xMin,
			yMax = h + yMin,
			dx = (xMax - xMin) / static_cast<float>(width),
			dy = (yMax - yMin) / static_cast<float>(height),
			x = xMin;
		for (int i = 0; i < width; i++)
		{
			float y = yMin;
			for (int j = 0; j < height; j++)
			{
				float a = x,
					b = y;
				int n{};
				while (n < iterations)
				{
					if (a * a + b * b > 64.0f)
						break;
					float twoab = 2.0f * a * b;
					a = (a * a - b * b) + c.real();
					b = twoab + c.imag();
					n++;
				}
				int brightness = remap<float>(std::sqrt(remap<float>(n, 0.0f, iterations, 0.0f, 1.0f)), 0.0f, 1.0f, 0.0f, 255.0f);
				if (n == iterations)
					brightness = 0;
				img.setPixelColor(i, j, QColor(brightness, brightness, brightness));
				y += dy;
			}
			x += dx;
		}
	}
}
