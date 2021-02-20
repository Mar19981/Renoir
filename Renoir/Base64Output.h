#pragma once
#include <QDialog>
#include <QClipboard>
#include "ui_base64OutputDialog.h"
namespace renoir
{
	class Base64Output : public QDialog
	{
		Q_OBJECT;
		Ui::Dialog ui;
	public:
		explicit Base64Output(const std::string& txt, QWidget* parent = nullptr);
		virtual ~Base64Output();
		void setBase64(std::string txt);
	private slots:
		void on_copyButton_clicked();
		};

}

