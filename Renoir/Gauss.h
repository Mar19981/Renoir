#pragma once
#include "Filter.h"
#include "enums.h"
namespace renoir
{
	//Class implementing gaussian blur filter
	class Gauss final : public Filter
	{
		unsigned int iterations;
	public:
		Gauss(QPixmap& map, const unsigned int iter, bool r = true, bool g = true, bool b = true);
		void apply() override;
	};
}

