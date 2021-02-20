#pragma once
#define QT_FEATURE_colordialog
#include <QWidget>
#include <QDialog>
#include <QColorDialog>
#include "non_template_functions.h"
#include <string>
#include <iostream>
#include "ui_applyTresholdFilterDialog.h"
#include "Treshold.h"
namespace renoir
{
	class TresholdDialog : public QDialog
	{
		Q_OBJECT;
		Ui::applyTresholdFilter ui;
		QPixmap map;
		QColor front, back;
		QString styleSheet;
	public:
		explicit TresholdDialog(QPixmap& img, QWidget* parent = nullptr);
		~TresholdDialog();
	private slots:
		void on_frontButton_clicked();
		void on_backButton_clicked();
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendFilter(Filter*);
	};
}

