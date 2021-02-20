#pragma once
#include "Brush.h"
namespace renoir
{
	class Eraser : public Brush
	{
	public:
		void setColor(const QColor& value) = delete;
		Eraser(const unsigned int size);
		~Eraser() = default;
	};

}

