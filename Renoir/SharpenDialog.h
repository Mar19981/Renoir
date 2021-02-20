#pragma once
#include <QDialog>
#include "Sharpen.h"
#include "ui_applySharpenFilterDialog.h"
namespace renoir
{
	class SharpenDialog : public QDialog
	{
		Q_OBJECT;
		Ui::sharpenFilterDialog ui;
		QPixmap map;
	public:
		explicit SharpenDialog(QPixmap& img, QWidget* parent = nullptr);
		virtual ~SharpenDialog();
	private slots:
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);
	};
}

