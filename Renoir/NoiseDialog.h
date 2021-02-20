#pragma once
#include <QDialog>
#include "enums.h"
#include "RandomNoise.h"
#include "ui_noiseDialog.h"
#include <iostream>
namespace renoir
{
	class NoiseDialog : public QDialog
	{
		Q_OBJECT;
		int width, height;
		Ui::noiseDialog ui;
	public:
		explicit NoiseDialog(int w, int h, QWidget* parent = nullptr);
		~NoiseDialog();
	private slots:
		void on_okButton_clicked();
	signals:
		void sendNoise(QImage);
	};
}

