#include "Gauss.h"
namespace renoir
{
	Gauss::Gauss(QPixmap& map, const unsigned int iter, bool r, bool g, bool b) : Filter(map, r, g, b), iterations(iter)
	{
	}
	void Gauss::apply()
	{
		unsigned int uppW = output.width() - 1,
			uppH = output.height() - 1;
		for (int it = 0; it < iterations; it++)
		{
			for (int i = 1; i < uppW; i++)
			{
				for (int j = 1; j < uppH; j++)
				{
					int redChannel{}, greenChannel{}, blueChannel{};
					if (red)
						redChannel = (output.pixelColor(i - 1, j - 1).red() + output.pixelColor(i + 1, j - 1).red() +
							output.pixelColor(i - 1, j + 1).red() + output.pixelColor(i + 1, j + 1).red() +
							output.pixelColor(i - 1, j).red() + output.pixelColor(i - 1, j).red() + output.pixelColor(i + 1, j).red() +
							output.pixelColor(i + 1, j).red() + output.pixelColor(i, j - 1).red() + output.pixelColor(i, j - 1).red() +
							output.pixelColor(i, j + 1).red() + output.pixelColor(i, j + 1).red() + output.pixelColor(i, j).red() +
							output.pixelColor(i, j).red() + output.pixelColor(i, j).red() + output.pixelColor(i, j).red()) >> 4;
					redChannel = output.pixelColor(i, j).red();
					if (green)
						greenChannel = (output.pixelColor(i - 1, j - 1).green() + output.pixelColor(i + 1, j - 1).green() +
							output.pixelColor(i - 1, j + 1).green() + output.pixelColor(i + 1, j + 1).green() +
							output.pixelColor(i - 1, j).green() + output.pixelColor(i - 1, j).green() + output.pixelColor(i + 1, j).green() +
							output.pixelColor(i + 1, j).green() + output.pixelColor(i, j - 1).green() + output.pixelColor(i, j - 1).green() +
							output.pixelColor(i, j + 1).green() + output.pixelColor(i, j + 1).green() + output.pixelColor(i, j).green() +
							output.pixelColor(i, j).green() + output.pixelColor(i, j).green() + output.pixelColor(i, j).green()) >> 4;
					else
						greenChannel = output.pixelColor(i, j).green();
					if (blue)
						blueChannel = (output.pixelColor(i - 1, j - 1).blue() + output.pixelColor(i + 1, j - 1).blue() +
							output.pixelColor(i - 1, j + 1).blue() + output.pixelColor(i + 1, j + 1).blue() +
							output.pixelColor(i - 1, j).blue() + output.pixelColor(i - 1, j).blue() + output.pixelColor(i + 1, j).blue() +
							output.pixelColor(i + 1, j).blue() + output.pixelColor(i, j - 1).blue() + output.pixelColor(i, j - 1).blue() +
							output.pixelColor(i, j + 1).blue() + output.pixelColor(i, j + 1).blue() + output.pixelColor(i, j).blue() +
							output.pixelColor(i, j).blue() + output.pixelColor(i, j).blue() + output.pixelColor(i, j).blue()) >> 4;
					else
						blueChannel = output.pixelColor(i, j).blue();
					output.setPixelColor(i, j, QColor(redChannel, greenChannel, blueChannel));
				}
			}
		}
	}
}