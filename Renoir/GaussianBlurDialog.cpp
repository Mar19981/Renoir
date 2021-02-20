#include "GaussianBlurDialog.h"
namespace renoir
{
	GaussianBlurDialog::GaussianBlurDialog(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));
	}
	GaussianBlurDialog::~GaussianBlurDialog()
	{
	}
	void GaussianBlurDialog::on_okButton_clicked()
	{
		Gauss* blur;
		if (ui.comboBox->currentIndex())
			blur = new Gauss(map, ui.iterationsValue->value(), ui.redCheck->isChecked(), ui.greenCheck->isChecked(), ui.blueCheck->isChecked());
		else
			blur = new Gauss(map, ui.iterationsValue->value());
		emit sendFilter(blur);
	}
	void GaussianBlurDialog::on_comboBox_activated(int i) 
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