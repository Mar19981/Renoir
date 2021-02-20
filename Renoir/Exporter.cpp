#include "Exporter.h"
namespace renoir
{
	std::vector<std::pair<std::string, std::string>> Exporter::formats = {
		std::make_pair<std::string, std::string>("data:image/bmp;base64,", "BMP"),
		std::make_pair<std::string, std::string>("data:image/jpeg;base64,", "JPG"),
		std::make_pair<std::string, std::string>("data:image/png;base64,", "PNG")
	};
	void Exporter::asPortableAnymap(const std::string& file, const QPixmap& img, PixmapMode mode)
	{

		std::ofstream out;
		if (mode == PixmapMode::COLOR_TXT || mode == PixmapMode::GRAYSCALE_TXT)
			out.open(file, std::ios_base::out);
		else
			out.open(file, std::ios_base::out | std::ios_base::binary);
		if (out)
		{
			int width = img.width(),
				height = img.height();
			auto saveImg = img.toImage();
			switch (mode)
			{
			case PixmapMode::GRAYSCALE_TXT:
			{
				out << "P2\n" << width << " " << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						out << saveImg.pixelColor(i, j).lightness() << ' ';
					}
				}

			}; break;
			case PixmapMode::COLOR_TXT:
			{
				out << "P3\n" << width << " " << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						out << saveImg.pixelColor(i, j).red() << ' ' << saveImg.pixelColor(i, j).green() << ' ' << saveImg.pixelColor(i, j).blue() << ' ';
					}
				}
			}; break;
			case PixmapMode::GRAYSCALE_BIN:
			{
				out << "P5\n" << width << ' ' << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						int value = saveImg.pixelColor(i, j).lightness();
						out.write(reinterpret_cast<const char*>(&value), sizeof(char));
					}
				}
			}; break;
			case PixmapMode::COLOR_BIN:
			{
				out << "P6\n" << width << ' ' << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						int red = saveImg.pixelColor(i, j).red(),
							green = saveImg.pixelColor(i, j).green(),
							blue = saveImg.pixelColor(i, j).blue();
						out.write(reinterpret_cast<const char*>(&red), sizeof(char));
						out.write(reinterpret_cast<const char*>(&green), sizeof(char));
						out.write(reinterpret_cast<const char*>(&blue), sizeof(char));
					}
				}
			}; break;
			}
			out.close();
		}
		else
			throw std::runtime_error("Failed to create file " + file + "!\n");
	}
	void Exporter::asPortableAnymap(const std::string& file, const QPixmap& img, PixmapMode mode, int clipped)
	{
		if (!clipped)
			throw std::runtime_error("Override value must be greater than 0!\n");

		std::ofstream out;
		if (mode == PixmapMode::COLOR_TXT || mode == PixmapMode::GRAYSCALE_TXT)
			out.open(file, std::ios_base::out);
		else
			out.open(file, std::ios_base::out | std::ios_base::binary);
		if (out)
		{
			int width = img.width(),
				height = img.height();
			auto saveImg = img.toImage();
			switch (mode)
			{
			case PixmapMode::GRAYSCALE_TXT:
			{
				out << "P2\n" << width << " " << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						out << std::min(saveImg.pixelColor(i, j).lightness(), clipped) << ' ';
					}
				}

			}; break;
			case PixmapMode::COLOR_TXT:
			{
				out << "P3\n" << width << " " << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						out << std::min(saveImg.pixelColor(i, j).red(), clipped) << ' '
							<< std::min(saveImg.pixelColor(i, j).green(), clipped) << ' ' 
							<< std::min(saveImg.pixelColor(i, j).blue(), clipped)  << ' ';
					}
				}
			}; break;
			case PixmapMode::GRAYSCALE_BIN:
			{
				out << "P5\n" << width << ' ' << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						int value = std::min(saveImg.pixelColor(i, j).lightness(), clipped);
						out.write(reinterpret_cast<const char*>(&value), sizeof(char));
					}
				}
			}; break;
			case PixmapMode::COLOR_BIN:
			{
				out << "P6\n" << width << ' ' << height << '\n' << 255 << '\n';
				for (int j = 0; j < height; j++)
				{
					for (int i = 0; i < width; i++)
					{
						int red = std::min(saveImg.pixelColor(i, j).red(), clipped),
							green = std::min(saveImg.pixelColor(i, j).green(), clipped),
							blue = std::min(saveImg.pixelColor(i, j).blue(), clipped);
						out.write(reinterpret_cast<const char*>(&red), sizeof(char));
						out.write(reinterpret_cast<const char*>(&green), sizeof(char));
						out.write(reinterpret_cast<const char*>(&blue), sizeof(char));
					}
				}
			}; break;
			}
			out.close();
		}
		else
			throw std::runtime_error("Failed to create file " + file + "!\n");

	}
	std::string Exporter::asBase64(const QPixmap& img, ImageFormat format)
	{
		QByteArray byteArray;
		QBuffer buffer(&byteArray);
		std::string output = formats.at(static_cast<int>(format)).first;
		buffer.open(QIODevice::WriteOnly);
		img.save(&buffer, formats.at(static_cast<int>(format)).second.c_str());
		output += byteArray.toBase64().toStdString();
		return output;
	}
}