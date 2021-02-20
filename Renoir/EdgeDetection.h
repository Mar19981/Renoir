#pragma once
#include "Filter.h"
namespace renoir
{
	//Class implementing Sobel edge detection
	class EdgeDetection : public Filter
	{
		Edges edges;
	public:
		EdgeDetection(QPixmap& map, Edges edg);
		void apply() override;
	};
}
