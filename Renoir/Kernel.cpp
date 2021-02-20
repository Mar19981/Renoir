#include "Kernel.h"
namespace renoir
{
	Kernel::Kernel(QPixmap& map, std::array<int, 9> arr, bool division, bool monochrome, int iter, bool r, bool g, bool b): Filter(map, r, g, b), matrix(arr), divide(division), mono(monochrome), iterations(iter), sum(std::accumulate(arr.begin(), arr.end(), 0))
	{
		if (divide && sum <= 0 )
			divide = false;
	}
	void Kernel::apply()
	{
		unsigned int uppW = output.width() - 1,
			uppH = output.height() - 1;
		float div{};
		if (!divide)
			div = 1.0f;
		else
			div = 1.0f / sum;
		if (mono)
			grayscale();
		QImage original(output);
		for (int it = 0; it < iterations; it++)
		{
			for (int i = 1; i < uppW; i++)
			{
				for (int j = 1; j < uppH; j++)
				{
					uint8_t redChannel{}, greenChannel{}, blueChannel{};
					if (red)
						redChannel = std::abs((original.pixelColor(i - 1, j - 1).red() * matrix.at(0) +
							original.pixelColor(i, j - 1).red() * matrix.at(1) + original.pixelColor(i + 1, j - 1).red() * matrix.at(2) +
							original.pixelColor(i - 1, j).red() * matrix.at(3) + original.pixelColor(i, j).red() * matrix.at(4) +
							original.pixelColor(i + 1, j).red() * matrix.at(5) + original.pixelColor(i - 1, j + 1).red() * matrix.at(6) +
							original.pixelColor(i, j + 1).red() * matrix.at(7) + original.pixelColor(i + 1, j + 1).red() * matrix.at(8)) * div);
					else
						redChannel = original.pixelColor(i, j).red();
					if (green)
						greenChannel = std::abs((original.pixelColor(i - 1, j - 1).green() * matrix.at(0) +
							original.pixelColor(i, j - 1).green() * matrix.at(1) + original.pixelColor(i + 1, j - 1).green() * matrix.at(2) +
							original.pixelColor(i - 1, j).green() * matrix.at(3) + original.pixelColor(i, j).green() * matrix.at(4) +
							original.pixelColor(i + 1, j).green() * matrix.at(5) + original.pixelColor(i - 1, j + 1).green() * matrix.at(6) +
							original.pixelColor(i, j + 1).green() * matrix.at(7) + original.pixelColor(i + 1, j + 1).green() * matrix.at(8)) * div);
					else
						greenChannel = original.pixelColor(i, j).green();
					if (blue)
						blueChannel = std::abs((original.pixelColor(i - 1, j - 1).blue() * matrix.at(0) +
							original.pixelColor(i, j - 1).blue() * matrix.at(1) + original.pixelColor(i + 1, j - 1).blue() * matrix.at(2) +
							original.pixelColor(i - 1, j).blue() * matrix.at(3) + original.pixelColor(i, j).blue() * matrix.at(4) +
							original.pixelColor(i + 1, j).blue() * matrix.at(5) + original.pixelColor(i - 1, j + 1).blue() * matrix.at(6) +
							original.pixelColor(i, j + 1).blue() * matrix.at(7) + original.pixelColor(i + 1, j + 1).blue() * matrix.at(8)) * div);
					else
						blueChannel = original.pixelColor(i, j).blue();
					output.setPixelColor(i, j, QColor(redChannel, greenChannel, blueChannel));
				}
			}
			if (iterations > 1)
				original = output;
		}
	}
}