#pragma once
#include <QDialog>
#include "Dither.h"
#include "ui_applyDitheringFilterDialog.h"
namespace renoir
{
	class DitherDialog : public QDialog
	{
		Q_OBJECT;
		Ui::ditheringDialog ui;
		QPixmap map;
	public:
		explicit DitherDialog(QPixmap& img, QWidget* parent = nullptr);
		virtual ~DitherDialog();
	private slots:
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);

	};
}

