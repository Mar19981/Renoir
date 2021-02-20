#pragma once
#include <QDialog>
#include <QColorDialog>
#include "non_template_functions.h"
#include "ui_RectangleSettingDialog.h"
namespace renoir
{
	class RectangleSettingsDialog : public QDialog
	{
		Q_OBJECT;
		QColor fill, outline;
		Ui::RectangleSettings ui;
	public:
		RectangleSettingsDialog(int x, int y, QWidget* parent = nullptr);
		RectangleSettingsDialog(int x, int y, QRectF& rect, QColor& f, QColor& outl, int outlSize, QWidget* parent = nullptr);
	private slots:
		void on_color_clicked();
		void on_outline_clicked();
		void on_okButton_clicked();
	signals:
		void sendRectangleData(QRectF& rect, QColor& fill, QColor& outlineColor, unsigned int outlineSize);

	};
}

