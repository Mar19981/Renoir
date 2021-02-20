#pragma once
#include <QDialog>
#include <QColorDialog>
#include "non_template_functions.h"
#include "ui_TextSettingsDialog.h" 
namespace renoir
{
	class TextSettingsDialog : public QDialog
	{
		Q_OBJECT;
		QColor fill, outline;
		Ui::textSettings ui;
	public:
		TextSettingsDialog(int x, int y, QWidget* parent = nullptr, bool modify = false);
		TextSettingsDialog(int x, int y, QString& txt, QFont& font, QPointF& pos, QColor& f, QColor& outl, int outlSize, QWidget* parent = nullptr);
	private slots:
		void on_color_clicked();
		void on_outline_clicked();
		void on_okButton_clicked();
	signals:
		void sendTextData(QFont& font, QString& txt, QColor& fill, QColor& outlineColor, unsigned int outlineSize, QPointF& pos);
	};
}

