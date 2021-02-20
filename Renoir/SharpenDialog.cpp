#include "SharpenDialog.h"
namespace renoir
{
	SharpenDialog::SharpenDialog(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));
	}
	SharpenDialog::~SharpenDialog()
	{
	}
	void SharpenDialog::on_okButton_clicked()
	{
		Sharpen* sharpen{};
		if (!ui.comboBox->currentIndex())
			sharpen = new Sharpen(map, ui.iterationsValue->value());
		else
			sharpen = new Sharpen(map, ui.iterationsValue->value(), ui.redCheck->isChecked(), ui.greenCheck->isChecked(), ui.blueCheck->isChecked());
		emit sendFilter(sharpen);
	}
	void SharpenDialog::on_comboBox_activated(int i)
	{
		switch (i)
		{
		case 1: {
			ui.blueCheck->setDisabled(false);
			ui.greenCheck->setDisabled(false);
			ui.redCheck->setDisabled(false);
		}; break;
		default: {
			ui.blueCheck->setDisabled(true);
			ui.greenCheck->setDisabled(true);
			ui.redCheck->setDisabled(true);
		}

		}
	}
}