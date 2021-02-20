#include "TextSettingsDialog.h"
namespace renoir
{
	TextSettingsDialog::TextSettingsDialog(int x, int y, QWidget* parent, bool modify): fill(QColor(Qt::red)), outline(QColor(Qt::black))
	{
		ui.setupUi(this);
		ui.xSpin->setMaximum(x);
		ui.ySpin->setMaximum(y);
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
		style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
		connect(this, SIGNAL(sendTextData(QFont&, QString&, QColor&, QColor&, unsigned int, QPointF&)), parent, SLOT(textEvent(QFont&, QString&, QColor&, QColor&, unsigned int, QPointF&)));
	}
	TextSettingsDialog::TextSettingsDialog(int x, int y, QString& txt, QFont& font, QPointF& pos, QColor& f, QColor& outl, int outlSize, QWidget* parent): fill(f), outline(outl)
	{
		ui.setupUi(this);
		ui.xSpin->setMaximum(x);
		ui.ySpin->setMaximum(y);
		ui.xSpin->setValue(pos.x());
		ui.ySpin->setValue(pos.y());
		ui.fontComboBox->setCurrentFont(font);
		ui.fontSpin->setValue(font.pixelSize());
		ui.outlineSpin->setValue(outlSize);
		ui.text->setText(txt);
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
		style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
		connect(this, SIGNAL(sendTextData(QFont&, QString&, QColor&, QColor&, unsigned int, QPointF&)), parent, SLOT(updateText(QFont&, QString&, QColor&, QColor&, unsigned int, QPointF&)));
	}
	void TextSettingsDialog::on_outline_clicked()
	{
		outline = QColorDialog::getColor(outline.rgba(), this, "Set outline color");
		QString style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
	}
	void TextSettingsDialog::on_okButton_clicked()
	{
		QString txt = ui.text->text();
		if (txt.isEmpty())
			txt = "Blank text";
		QFont font(ui.fontComboBox->currentFont());
		font.setPixelSize(ui.fontSpin->value());
		emit sendTextData(font, txt, fill, outline, ui.outlineSpin->value(), QPointF(ui.xSpin->value(), ui.ySpin->value()));
	}
	void TextSettingsDialog::on_color_clicked()
	{
		fill = QColorDialog::getColor(fill.rgba(), this, "Set fill color");
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
	}
}