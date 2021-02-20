#include "non_template_functions.h"

namespace renoir
{
	std::string changeStyleSheet(const QColor& color, const QString& styleSheet)
	{
		std::string edit = styleSheet.toStdString();
		edit.replace(edit.begin() + edit.find("<color>"), edit.begin() + edit.find("<color>") + 7, std::to_string(color.red()));
		edit.replace(edit.begin() + edit.find("<color>"), edit.begin() + edit.find("<color>") + 7, std::to_string(color.green()));
		edit.replace(edit.begin() + edit.find("<color>"), edit.begin() + edit.find("<color>") + 7, std::to_string(color.blue()));
		return edit;
	}
	std::string getFileContent(const std::string& filePath)
	{
		std::stringstream ss;
		std::ifstream file(filePath);
		if (file)
		{
			while (!file.eof())
			{
				std::string str;
				file >> str;
				ss << str;
			}
			file.close();
		}
		else
			throw std::runtime_error("Failed to open given file!\n");
		return ss.str();
	}
}