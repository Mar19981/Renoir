#pragma once
#include "enums.h"
#include "functions.h"
#include <QPixmap>
#include <QApplication>
#include <QClipboard>
#include <QBuffer>
#include <fstream>
#include <string>
#include <utility>
#include <vector>
namespace renoir
{
	class Exporter
	{
		static std::vector<std::pair<std::string, std::string>> formats;
	public:
		static void asPortableAnymap(const std::string& file, const QPixmap& img, PixmapMode mode);
		static void asPortableAnymap(const std::string& file, const QPixmap& img, PixmapMode mode, int clipped);
		static std::string asBase64(const QPixmap& img, ImageFormat format = ImageFormat::JPG);
	};
}

