#pragma once
#include <QDialog>
#include "Kernel.h"
#include <array>
#include <algorithm>
#include "ui_applyKernelFilterDialog.h"
namespace renoir
{
	class KernelDialog : public QDialog
	{
		Q_OBJECT;
		Ui::kernelDialog ui;
		QPixmap map;
	public:
		explicit KernelDialog(QPixmap& img, QWidget* parent = nullptr);
		virtual ~KernelDialog();
	private slots:
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);
	};
}

