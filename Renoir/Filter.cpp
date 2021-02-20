#include "Filter.h"
namespace renoir
{
	int Filter::getIndex(int i, int j)
	{
		return j * original.width() + i;
	}
	Filter::Filter(QPixmap& map, bool r, bool g, bool b): original(map), output(QImage(map.toImage())), red(r), green(g), blue(b)
	{
	}

	void Filter::grayscale()
	{
		std::vector<QRgb> pixels(output.width() * output.height());
		std::memmove(pixels.data(), output.bits(), output.width() * output.height() * sizeof(QRgb));
		std::for_each(pixels.begin(), pixels.end(), [](QRgb& pixel) {
			int gray = qGray(qRed(pixel), qGreen(pixel), qBlue(pixel));
			pixel = qRgb(gray, gray, gray);
			});
		std::memmove(output.bits(), pixels.data(), output.width() * output.height() * sizeof(QRgb));
	}

	QImage Filter::getOutput()
	{
		return output;
	}

}