#include "EdgeDetection.h"
namespace renoir
{
	EdgeDetection::EdgeDetection(QPixmap& map, Edges edg): Filter(map), edges(edg)
	{
	}

	void EdgeDetection::apply()
	{
		grayscale();
		int uppW = output.width() - 1,
			uppH = output.height() - 1;
		QImage original(output);
		if (edges == Edges::XY)
		{
			for (int j = 1; j < uppW; j++)
			{
				for (int i = 1; i < uppH; i++)
				{
					int xEdge = original.pixelColor(i + 1, j - 1).lightness() + original.pixelColor(i + 1, j + 1).lightness() +
						original.pixelColor(i + 1, j).lightness() + original.pixelColor(i + 1, j).lightness() - original.pixelColor(i - 1, j - 1).lightness() -
						original.pixelColor(i - 1, j + 1).lightness() - original.pixelColor(i - 1, j).lightness() - original.pixelColor(i - 1, j).lightness(),
						yEdge = original.pixelColor(i - 1, j - 1).lightness() + original.pixelColor(i + 1, j - 1).lightness() +
						original.pixelColor(i, j - 1).lightness() + original.pixelColor(i, j - 1).lightness() - original.pixelColor(i - 1, j + 1).lightness() -
						original.pixelColor(i + 1, j + 1).lightness() - original.pixelColor(i, j + 1).lightness() - original.pixelColor(i, j + 1).lightness(),
						edge = std::sqrt(xEdge * xEdge + yEdge * yEdge);
					output.setPixelColor(i, j, QColor(edge, edge, edge));
				}
			}
		}
		else if (edges == Edges::X)
		{
			for (int j = 1; j < uppW; j++)
			{
				for (int i = 1; i < uppH; i++)
				{
					int edge = original.pixelColor(i + 1, j - 1).lightness() + original.pixelColor(i + 1, j + 1).lightness() +
						original.pixelColor(i + 1, j).lightness() + original.pixelColor(i + 1, j).lightness() - original.pixelColor(i - 1, j - 1).lightness() -
						original.pixelColor(i - 1, j + 1).lightness() - original.pixelColor(i - 1, j).lightness() - original.pixelColor(i - 1, j).lightness();
					output.setPixelColor(i, j, QColor(edge, edge, edge));
				}
			}
		}
		else
		{
			for (int j = 1; j < uppW; j++)
			{
				for (int i = 1; i < uppH; i++)
				{
					int edge = original.pixelColor(i - 1, j - 1).lightness() + original.pixelColor(i + 1, j - 1).lightness() +
						original.pixelColor(i, j - 1).lightness() + original.pixelColor(i, j - 1).lightness() - original.pixelColor(i - 1, j + 1).lightness() -
						original.pixelColor(i + 1, j + 1).lightness() - original.pixelColor(i, j + 1).lightness() - original.pixelColor(i, j + 1).lightness();
					output.setPixelColor(i, j, QColor(edge, edge, edge));
				}
			}
		}
	}

}
