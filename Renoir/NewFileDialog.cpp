#include "NewFileDialog.h"
namespace renoir
{
	NewFileDialog::NewFileDialog(QWidget* parent): styleSheet("background: rgb(<color>, <color>, <color>)"), bg(QColor(255,255,255))
	{
		ui.setupUi(this);
		QString style = changeStyleSheet(bg, styleSheet).c_str();
		ui.bgButton->setStyleSheet(style);
		connect(this, SIGNAL(sendNewFileData(int, int, QColor&, QString&)), parent, SLOT(createNewFile(int, int, QColor&, QString&)));
	}
	NewFileDialog::~NewFileDialog()
	{

	}
	void NewFileDialog::on_transparentCheck_clicked()
	{
		if (ui.transparentCheck->isChecked())
			ui.bgButton->setEnabled(false);
		else
			ui.bgButton->setEnabled(true);

	}
	void NewFileDialog::on_okButton_clicked()
	{
		if (ui.transparentCheck->isChecked())
			bg = QColor(0, 0, 0, 0);
		emit sendNewFileData(ui.widthValue->value(), ui.heightValue->value(), bg, ui.nameValue->text());
	}
	void NewFileDialog::on_bgButton_clicked()
	{
		bg = QColorDialog::getColor(Qt::white, this, "Pick background color");
		QString style = changeStyleSheet(bg, styleSheet).c_str();
		ui.bgButton->setStyleSheet(style);
	}
}