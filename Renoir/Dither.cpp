#include "Dither.h"


namespace renoir
{
	Dither::Dither(QPixmap& map, const uint8_t _bits, bool m, bool r, bool g, bool b): Filter(map, r, g, b), bits(_bits), mono(m)
	{
	}

	void Dither::apply()
	{
		unsigned int uppH = output.height() - 1,
			uppW = output.width() - 1;
		if (!mono)
		{
			for (int j = 0; j < uppH; j++)
			{
				for (int i = 1; i < uppW; i++)
				{
					auto orp = output.pixelColor(i,j);
					int n_red = red ? findClosestColor(orp.red()) : orp.red(),
						n_green = green ? findClosestColor(orp.green()) : orp.green(),
						n_blue = blue ? findClosestColor(orp.blue()) : orp.blue();
					output.setPixelColor(i, j, QColor(n_red, n_green, n_blue));
					int errRed = orp.red() - n_red,
						errGreen = orp.green() - n_green,
						errBlue = orp.blue() - n_blue;
					QColor firstErr = QColor(red ? output.pixelColor(i + 1, j).red() + errRed * (7 >> 4) : output.pixelColor(i + 1, j).red(),
						green ? output.pixelColor(i + 1, j).green() + errGreen * (7 >> 4) : output.pixelColor(i + 1, j).green(), 
						blue ? output.pixelColor(i + 1, j).blue() + errBlue * (7 >> 4) : output.pixelColor(i + 1, j).blue()),
						secondErr = QColor(red ? output.pixelColor(i + 1, j + 1).red() + errRed * (1 >> 4) : output.pixelColor(i + 1, j + 1).red(),
							green ? output.pixelColor(i + 1, j + 1).green() + errGreen * (1 >> 4) : output.pixelColor(i + 1, j + 1).green(),
							blue ? output.pixelColor(i + 1, j + 1).blue() + errBlue * (1 >> 4) : output.pixelColor(i + 1, j + 1).blue()),
						thirdErr = QColor(red ? output.pixelColor(i, j + 1).red() + errRed * (5 >> 4) : output.pixelColor(i, j + 1).red(),
							 green ? output.pixelColor(i, j + 1).green() + errGreen * (5 >> 4) : output.pixelColor(i, j + 1).green(),
							blue ? output.pixelColor(i, j + 1).blue() + errBlue * (5 >> 4) : output.pixelColor(i, j + 1).blue()),
						fourthErr = QColor(red ? output.pixelColor(i - 1, j + 1).red() + errRed * (3 >> 4) : output.pixelColor(i - 1, j + 1).red(),
							green ? output.pixelColor(i - 1, j + 1).green() + errGreen * (3 >> 4) : output.pixelColor(i - 1, j + 1).green(),
							blue ? output.pixelColor(i - 1, j + 1).blue() + errBlue * (3 >> 4) : output.pixelColor(i - 1, j + 1).blue());

					output.setPixelColor(i + 1, j, firstErr);
					output.setPixelColor(i + 1, j + 1, secondErr);
					output.setPixelColor(i, j + 1, thirdErr);
					output.setPixelColor(i - 1, j + 1, fourthErr);
				}
			}
		}
		else
		{
			for (int j = 0; j < uppH; j++)
			{
				for (int i = 1; i < uppW; i++)
				{
					auto orp = output.pixelColor(i, j).lightness();
					int nColor = findClosestColor(orp);
					output.setPixelColor(i, j, QColor(nColor, nColor, nColor));
					int err = orp - nColor;
					int firstErr = output.pixelColor(i + 1, j).lightness() + err * (7 >> 4),
						secondErr = output.pixelColor(i + 1, j + 1).lightness() + err * (1 >> 4),
						thirdErr = output.pixelColor(i, j + 1).lightness() + err * (5 >> 4),
						fourthErr = output.pixelColor(i - 1, j + 1).lightness() + err * (3 >> 4);

					output.setPixelColor(i + 1, j, QColor(firstErr, firstErr, firstErr));
					output.setPixelColor(i + 1, j + 1, QColor(secondErr, secondErr, secondErr));
					output.setPixelColor(i, j + 1, QColor(thirdErr, thirdErr, thirdErr));
					output.setPixelColor(i - 1, j + 1, QColor(fourthErr, fourthErr, fourthErr));
				}
			}
		}
	}
}
