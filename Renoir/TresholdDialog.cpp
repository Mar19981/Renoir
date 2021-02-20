#include "TresholdDialog.h"
namespace renoir
{
	TresholdDialog::TresholdDialog(QPixmap& img, QWidget* parent): styleSheet("background: rgb(<color>, <color>, <color>)"), front(255,255,255), back(0,0,0), map(img)
	{
		ui.setupUi(this);
		QString style = changeStyleSheet(front, styleSheet).c_str();
		ui.frontButton->setStyleSheet(style);
		style = changeStyleSheet(back, styleSheet).c_str();
		ui.backButton->setStyleSheet(style);
		connect(this, SIGNAL(sendFilter(Filter*)), parent, SLOT(receiveFilter(Filter*)));
	}
	TresholdDialog::~TresholdDialog()
	{
	}
	void TresholdDialog::on_backButton_clicked()
	{
		back = QColorDialog::getColor(Qt::black, this, "Pick background color");
		QString style = changeStyleSheet(back, styleSheet).c_str();
		ui.backButton->setStyleSheet(style);
	}
	void TresholdDialog::on_comboBox_activated(int i)
	{
		switch (i)
		{
		case 1: {
			ui.blueBox->setEnabled(true);
			ui.greenBox->setEnabled(true);
			ui.redBox->setEnabled(true);
		}; break;
		default: {
			ui.blueBox->setEnabled(false);
			ui.greenBox->setEnabled(false);
			ui.redBox->setEnabled(false);
		}
		}
	}

	void TresholdDialog::on_okButton_clicked()
	{
		Treshold* treshold;
		if (ui.comboBox->currentIndex())
			treshold = new Treshold(map, ui.treshholdValue->value(), front, back, ui.redBox->isChecked(), ui.greenBox->isChecked(), ui.blueBox->isChecked());
		else
			treshold = new Treshold(map, ui.treshholdValue->value(), front, back);
		emit sendFilter(treshold);
	}

	void TresholdDialog::on_frontButton_clicked()
	{
		front = QColorDialog::getColor(Qt::white, this, "Pick foreground color");
		QString style = changeStyleSheet(front, styleSheet).c_str();
		ui.frontButton->setStyleSheet(style);
	}
}