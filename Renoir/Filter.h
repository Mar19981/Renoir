#pragma once
#include <memory>
#include <string>
#include <vector>
#include "enums.h"
#include <algorithm>
#include <QPixmap>
#include <QImage>
namespace renoir
{
	//Abstract class representing basic filter functionality
	class Filter
	{
	protected:
		QPixmap original;
		QImage output;
		bool red, green, blue;
		int getIndex(int i, int j);
	public:
		virtual void apply() = 0;
		Filter(QPixmap& map, bool r = true, bool g = true, bool b = true);
		virtual ~Filter() = default;
		void grayscale();
		QImage getOutput();
	};

}

