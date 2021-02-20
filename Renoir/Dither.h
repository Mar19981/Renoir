#pragma once
#include <algorithm>
#include "Filter.h"
namespace renoir
{
	//Class implementing Floyd-Steinberg dithering
	class Dither : public Filter
	{
		uint8_t bits;
		inline unsigned int findClosestColor(unsigned int pixel) noexcept {
			return std::round(((pixel * bits) / 255) * (255 / bits));
		}
		bool mono;
		
	public:
		Dither(QPixmap& map, const uint8_t _bits, bool m = false, bool r = true, bool g = true, bool b = true);
		void apply() override;
		inline void set(const uint8_t val) noexcept { bits = val; };
	};

}

