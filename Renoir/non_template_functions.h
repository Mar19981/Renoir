#pragma once
#include <string>
#include <QColor>
#include <QString>
#include <fstream>
#include <sstream>
namespace renoir
{
	std::string changeStyleSheet(const QColor& color, const QString& styleSheet = "background: rgb(<color>, <color>, <color>)");
	std::string getFileContent(const std::string& filePath);
}