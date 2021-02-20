#pragma once
#include "Filter.h"
#include <vector>
namespace renoir
{
	class Sharpen : public Filter
	{
		unsigned int iterations;
	public:
		Sharpen(QPixmap& map, unsigned int iter, bool r = true, bool g = true, bool b = true);
		void apply() override;
	};
}

