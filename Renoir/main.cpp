#include <iostream>
#include "Renoir.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <vld.h>

using namespace renoir;

int main(int argc, char *argv[])
{
		QApplication app(argc, argv);
		Renoir mainWindow;
	try
	{
		mainWindow.show();
		return app.exec();
	}
	catch (const std::exception& e)
	{
		QMessageBox box(QMessageBox::Icon::Critical, "Error", e.what(), QMessageBox::Button::NoButton, &mainWindow);
		box.show();
		return app.exec();
	}
}
