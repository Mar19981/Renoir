#include "Sharpen.h"
namespace renoir
{
	Sharpen::Sharpen(QPixmap& map, unsigned int iter, bool r, bool g, bool b): Filter(map, r, g, b), iterations(iter)
	{
	}
	void Sharpen::apply()
	{
		unsigned int upperW = output.width() - 1,
			upperH = output.height() - 1;
		QImage original(output);
		for (int it = 0; it < iterations; it++)
		{
			for (int j = 1; j < upperW; j++)
			{
			for (int i = 1; i < upperH; i++)
				{
				int redChannel{}, greenChannel{}, blueChannel{};
				if (red)
					redChannel = 5 * original.pixelColor(i, j).red() - original.pixelColor(i + 1, j).red() - original.pixelColor(i - 1, j).red() -
					original.pixelColor(i, j + 1).red() - original.pixelColor(i, j - 1).red();
				else
					redChannel = original.pixelColor(i, j).red();
				if (green)
					greenChannel = 5 * original.pixelColor(i, j).green() - original.pixelColor(i + 1, j).green() - original.pixelColor(i - 1, j).green() -
					original.pixelColor(i, j + 1).green() - original.pixelColor(i, j - 1).green();
				else
					greenChannel = original.pixelColor(i, j).green();
				if (blue)
					blueChannel = 5 * original.pixelColor(i, j).blue() - original.pixelColor(i + 1, j).blue() - original.pixelColor(i - 1, j).blue() -
					original.pixelColor(i, j + 1).blue() - original.pixelColor(i, j - 1).blue();
				else
					blueChannel = original.pixelColor(i, j).blue();
					
					output.setPixelColor(i, j, QColor(redChannel, greenChannel, blueChannel));
				}
			}
			original = output;
		}
	}
};