#include "BrushSizeDialog.h"
namespace renoir
{
	BrushSizeDialog::BrushSizeDialog(int brushSize, QWidget* parent)
	{
		ui.setupUi(this);
		ui.sizeSpin->setValue(brushSize);
		connect(this, SIGNAL(sendBrushSize(int)), parent, SLOT(changeBrushSize(int)));
	}

	BrushSizeDialog::~BrushSizeDialog()
	{
	}
	void BrushSizeDialog::on_okButton_clicked()
	{
		emit sendBrushSize(ui.sizeSpin->value());
	}
}
