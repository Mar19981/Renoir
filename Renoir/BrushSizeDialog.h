#pragma once
#include <QDialog>
#include "ui_setBrushSizeDialog.h"
namespace renoir
{
	class BrushSizeDialog : public QDialog
	{
		Q_OBJECT;
		Ui::brushSizeDialog ui;
	public:
		BrushSizeDialog(int brushSize, QWidget* parent = nullptr);
		~BrushSizeDialog();
	private slots:
		void on_okButton_clicked();
	signals:
		void sendBrushSize(int i);
	};
}

