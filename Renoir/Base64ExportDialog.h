#pragma once
#include <QDialog>
#include "ui_base64ExportDialog.h"
#include "Exporter.h"
#include "Base64Output.h"
#include <iostream>
#include <string>
namespace renoir
{
	class Base64ExportDialog : public QDialog
	{
		Q_OBJECT;
		Ui::base64Dialog ui;
		QPixmap img;
	public:
		Base64ExportDialog(QPixmap& map, QWidget* parent = nullptr);
		~Base64ExportDialog();
	public slots:
		void on_okButton_clicked();
	signals:
		void sendBase64Result(std::string& txt);
	};
}

