#include "RectangleSettingsDialog.h"
namespace renoir
{
	RectangleSettingsDialog::RectangleSettingsDialog(int x, int y, QWidget* parent): fill(QColor(Qt::red)), outline(QColor(Qt::black))
	{
		ui.setupUi(this);
		ui.xSpin->setMaximum(x);
		ui.ySpin->setMaximum(y);
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
		style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
		connect(this, SIGNAL(sendRectangleData(QRectF&, QColor&, QColor&, unsigned int)), parent, SLOT(rectangleEvent(QRectF& , QColor&, QColor&, unsigned int)));
	}
	RectangleSettingsDialog::RectangleSettingsDialog(int x, int y, QRectF& rect, QColor& f, QColor& outl, int outlSize, QWidget* parent): fill(f), outline(outl)
	{
		ui.setupUi(this);
		ui.xSpin->setMaximum(x);
		ui.ySpin->setMaximum(y);
		ui.xSpin->setValue(rect.x());
		ui.ySpin->setValue(rect.y());
		ui.widthSpin->setValue(rect.width());
		ui.heightSpin->setValue(rect.height());
		ui.outlineSpin->setValue(outlSize);
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
		style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
		connect(this, SIGNAL(sendRectangleData(QRectF&, QColor&, QColor&, unsigned int)), parent, SLOT(updateShape(QRectF&, QColor&, QColor&, unsigned int)));
	}
	void RectangleSettingsDialog::on_outline_clicked()
	{
		outline = QColorDialog::getColor(outline.rgba(), this, "Set outline color");
		QString style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
	}
	void RectangleSettingsDialog::on_okButton_clicked()
	{
		QRectF rect(ui.xSpin->value(), ui.ySpin->value(), ui.widthSpin->value(), ui.heightSpin->value());
		emit sendRectangleData(rect, fill, outline, ui.outlineSpin->value());
	}
	void RectangleSettingsDialog::on_color_clicked()
	{
		fill = QColorDialog::getColor(fill.rgba(), this, "Set fill color");
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
	}
}