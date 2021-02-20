#pragma once
#include <QDialog>
#include "Gauss.h"
#include "ui_applyGaussianFilterDialog.h"
namespace renoir
{
	class GaussianBlurDialog : public QDialog
	{
		Q_OBJECT;
		Ui::gaussianFilterDialog ui;
		QPixmap map;

	public:
		explicit GaussianBlurDialog(QPixmap& img, QWidget* parent = nullptr);
		virtual ~GaussianBlurDialog();
	private slots:
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);
	};
}

