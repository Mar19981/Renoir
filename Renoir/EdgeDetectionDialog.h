#pragma once
#include <QDialog>
#include <iostream>
#include "EdgeDetection.h"
#include "ui_applyEdgeDetectionFilterDialog.h"
namespace renoir
{
	class EdgeDetectionDialog : public QDialog
	{
		Q_OBJECT;
		Ui::edgeDetectionDialog ui;
		QPixmap map;
	public:
		explicit EdgeDetectionDialog(QPixmap& img, QWidget* parent = nullptr);
		~EdgeDetectionDialog();
	private slots:
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);
	};
}

