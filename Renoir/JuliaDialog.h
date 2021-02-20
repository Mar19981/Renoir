#pragma once
#include <QDialog>
#include <complex>
#include "Julia.h"
#include "ui_JuliaDialog.h"
namespace renoir
{
	class JuliaDialog : public QDialog
	{
		Q_OBJECT;
		Ui::JuliaDialog ui;
		int width, height;
	public:
		explicit JuliaDialog(int w, int h, QWidget* parent = nullptr);
		~JuliaDialog();
	private slots:
		void on_okButton_clicked();
	signals:
		void sendJulia(QImage img);
	};

}

