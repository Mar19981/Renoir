#pragma once
#include <QDialog>
#include <iostream>
#include "Mandelbrot.h"
#include "ui_MandelbrotDialog.h"
namespace renoir
{
	class MandelbrotDialog : public QDialog
	{
		Q_OBJECT;
		Ui::MandelbrotDialog ui;
		int width, height;
	public:
		explicit MandelbrotDialog(int w, int h, QWidget* parent =  nullptr);
		~MandelbrotDialog();
	private slots:
		void on_okButton_clicked();
	signals:
		void sendMandelbrot(QImage img);
	};
}

