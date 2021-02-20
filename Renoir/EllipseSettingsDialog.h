#pragma once
#include <QDialog>
#include <QColorDialog>
#include "non_template_functions.h"
#include "ui_EllipseSettingDialog.h"
namespace renoir
{
	class EllipseSettingsDialog : public QDialog
	{
		Q_OBJECT;
		QColor fill, outline;
		Ui::ellipseSettingsDialog ui;
	public:
		EllipseSettingsDialog(int x, int y, QWidget* parent = nullptr);
		EllipseSettingsDialog(int x, int y, QRectF& rect, QColor& f, QColor& outl, int outlSize, QWidget* parent = nullptr);
	private slots:
		void on_color_clicked();
		void on_outline_clicked();
		void on_circleCheck_stateChanged(int i);
		void on_okButton_clicked();
	signals:
		void sendEllipseData(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize);
	};
}

