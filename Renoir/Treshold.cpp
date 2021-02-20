#include "Treshold.h"

namespace renoir
{
	void Treshold::applyTreshold(int start, int end)
	{
		for (int i = start; i < end; i++)
		{
			if (QColor(pixels.at(i)).lightness() < tresholdValue)
				pixels.at(i) = background.rgb();
			else
				pixels.at(i) = foreground.rgb();
		}
	}
	void Treshold::applyTresholdToChannels(int start, int end)
	{
		int rColor{}, gColor{}, bColor{};
		for (int i = start; i < end; i++)
		{
			QColor temp(pixels.at(i));
			if (red)
				rColor = temp.red() < tresholdValue ? 0 : 255;
			else
				rColor = temp.red();
			if (green)
				gColor = temp.green() < tresholdValue ? 0 : 255;
			else
				gColor = temp.green();
			if (blue)
				bColor = temp.blue() < tresholdValue ? 0 : 255;
			else
				bColor = temp.blue();
			pixels.at(i) = qRgb(rColor, gColor, bColor);
		}
	}
	Treshold::Treshold(QPixmap& map, const uint8_t treshold, const QColor& _above, const QColor& _below, bool r, bool g, bool b):
		Filter(map, r, g, b), tresholdValue(treshold), foreground(_above), background(_below), pixels(output.width() * output.height())
	{
		if (red && green && blue)
			mode = ChannelSelection::RGB;
		else
			mode = ChannelSelection::CHANNELS;
		std::memmove(pixels.data(), output.bits(), output.width() * output.height() * sizeof(QRgb));

	}

	void Treshold::apply()
	{
		int len = output.width() * output.height(),
			threads_num = std::thread::hardware_concurrency(),
			step = len / threads_num,
			start = 0,
			end = step;
		//Dla kazdego piksela sprawdz, czy jego jasnosc znajduje sie pod progiem. Jezeli tak,
		//zastap go kolorem tla. W przeciwnym razie, kolorem pierwszego planu.
		std::vector<std::thread> threads;
		for (int i = 0; i < threads_num; i++)
		{
			if (mode == ChannelSelection::RGB)
				threads.emplace_back(std::thread([=] {applyTreshold(start, end); }));
			else
				threads.emplace_back(std::thread([=] {applyTresholdToChannels(start, end); }));
			start = end;
			end += step;
		}
		for (auto& thread : threads)
			thread.join();


		std::memmove(output.bits(), pixels.data(), len * sizeof(QRgb));
	}
}
