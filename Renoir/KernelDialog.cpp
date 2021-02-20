#include "KernelDialog.h"
namespace renoir
{
	KernelDialog::KernelDialog(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));
	}
	KernelDialog::~KernelDialog()
	{
	}
	void KernelDialog::on_okButton_clicked()
	{
		Kernel* filter{};
		std::array<int, 9> kernel{};
		kernel.at(0) = ui.value1->value();
		kernel.at(1) = ui.value2->value();
		kernel.at(2) = ui.value3->value();
		kernel.at(3) = ui.value4->value();
		kernel.at(4) = ui.value5->value();
		kernel.at(5) = ui.value6->value();
		kernel.at(6) = ui.value7->value();
		kernel.at(7) = ui.value8->value();
		kernel.at(8) = ui.value9->value();
		if (ui.comboBox->currentIndex())
			filter = new Kernel(map, kernel, ui.normalize->isChecked(), ui.grayscale->isChecked(), ui.iterationsValue->value(),
				ui.redCheck->isChecked(), ui.greenCheck->isChecked(), ui.blueCheck->isChecked());
		else
			filter = new Kernel(map, kernel, ui.normalize->isChecked(), ui.grayscale->isChecked(), ui.iterationsValue->value());
		emit sendFilter(filter);
	}
	void KernelDialog::on_comboBox_activated(int i)
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