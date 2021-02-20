#include "EllipseSettingsDialog.h"
namespace renoir
{
	EllipseSettingsDialog::EllipseSettingsDialog(int x, int y, QWidget* parent): fill(QColor(Qt::red)), outline(QColor(Qt::black))
	{
		ui.setupUi(this);
		ui.xSpin->setMaximum(x);
		ui.ySpin->setMaximum(y);
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
		style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
		connect(this, SIGNAL(sendEllipseData(QRectF&, QColor&, QColor&, unsigned int)), parent, SLOT(ellipseEvent(QRectF&, QColor&, QColor&, unsigned int)));
	}
	EllipseSettingsDialog::EllipseSettingsDialog(int x, int y, QRectF& rect, QColor& f, QColor& outl, int outlSize, QWidget* parent): fill(f), outline(outl)
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
		connect(this, SIGNAL(sendEllipseData(QRectF&, QColor&, QColor&, unsigned int)), parent, SLOT(updateShape(QRectF&, QColor&, QColor&, unsigned int)));
	}
	void EllipseSettingsDialog::on_outline_clicked()
	{
		outline = QColorDialog::getColor(outline.rgba(), this, "Set outline color");
		QString style = changeStyleSheet(outline).c_str();
		ui.outline->setStyleSheet(style);
	}
	void EllipseSettingsDialog::on_circleCheck_stateChanged(int i)
	{
		if (i)
		{
			ui.widthSpin->setEnabled(false);
			ui.heightSpin->setEnabled(false);
			ui.radiousSpin->setEnabled(true);			
		}
		else
		{
			ui.widthSpin->setEnabled(true);
			ui.heightSpin->setEnabled(true);
			ui.radiousSpin->setEnabled(false);

		}
	}
	void EllipseSettingsDialog::on_okButton_clicked()
	{
		QRectF rect(ui.xSpin->value(), ui.ySpin->value(), 0, 0);
		if (ui.circleCheck->isChecked())
		{
			rect.setWidth(ui.radiousSpin->value());
			rect.setHeight(ui.radiousSpin->value());			
		}
		else
		{
			rect.setWidth(ui.widthSpin->value());
			rect.setHeight(ui.heightSpin->value());
		}
		emit sendEllipseData(rect, fill, outline, ui.outlineSpin->value());
	}
	void EllipseSettingsDialog::on_color_clicked()
	{
		fill = QColorDialog::getColor(fill.rgba(), this, "Set fill color");
		QString style = changeStyleSheet(fill).c_str();
		ui.color->setStyleSheet(style);
	}
}