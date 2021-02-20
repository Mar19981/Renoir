#pragma once
#include "Filter.h"
#include <array>
#include <numeric>
#include "enums.h"
namespace renoir
{
	class Kernel : public Filter
	{
		std::array<int, 9> matrix;
		bool divide, mono;
		int iterations, sum;
	public:
		Kernel(QPixmap& map, std::array<int, 9> arr, bool division = false, bool monochrome = false, int iter = 1, bool r = true, bool g = true, bool b = true);
		void apply() override;
	};
}

