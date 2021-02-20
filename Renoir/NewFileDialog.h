#pragma once
#include <QDialog>
#include <QColorDialog>
#include "non_template_functions.h"
#include "ui_newFileDialog.h"

namespace renoir
{
	class NewFileDialog : public QDialog
	{
		Q_OBJECT;
		Ui::newFileDialog ui;
		QString styleSheet;
		QColor bg;
	public:
		explicit NewFileDialog(QWidget* parent = nullptr);
		~NewFileDialog();
	private slots:
		void on_bgButton_clicked();
		void on_transparentCheck_clicked();
		void on_okButton_clicked();
	signals:
		void sendNewFileData(int width, int height, QColor& color, QString& name);
	};

}

