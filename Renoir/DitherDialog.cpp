#include "DitherDialog.h"
namespace renoir
{
	DitherDialog::DitherDialog(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));

	}
	DitherDialog::~DitherDialog()
	{
	}
	void DitherDialog::on_okButton_clicked()
	{
		Dither* dither{};
		switch (ui.comboBox->currentIndex())
		{
		case 1: dither = new Dither(map, ui.resolutionSpin->value(), true); break;
		case 2: dither = new Dither(map, ui.resolutionSpin->value(), false, ui.redCheck->isChecked(), ui.greenCheck->isChecked(), ui.blueCheck->isChecked()); break;
		default: dither = new Dither(map, ui.resolutionSpin->value());
		}
		emit sendFilter(dither);
	}
	void DitherDialog::on_comboBox_activated(int i)
	{
		switch (i)
		{
		case 2: {
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