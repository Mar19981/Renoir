#pragma once
#include "Filter.h"
#include "enums.h"
#include <QColor>
#include <vector>
#include <thread>
namespace renoir
{
	//Class implementing basic image tresholding
	class Treshold : public Filter
	{
		uint8_t tresholdValue;
		QColor foreground, background;
		ChannelSelection mode;
		std::vector<QRgb> pixels;
		void applyTreshold(int start, int end);
		void applyTresholdToChannels (int start, int end);
	public:
		Treshold(QPixmap& map, const uint8_t treshold, const QColor& _above, const QColor& _below, bool r = true, bool g = true, bool b = true);
		void apply() override;
	};
}

