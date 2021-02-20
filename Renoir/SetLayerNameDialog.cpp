#include "SetLayerNameDialog.h"
namespace renoir
{
	SetLayerNameDialog::SetLayerNameDialog(const QString& txt, QWidget* parent)
	{
		ui.setupUi(this);
		ui.name->setText(txt);
		connect(this, SIGNAL(sendLayerName(QString&)), parent, SLOT(receiveNewLayerName(QString&)));
	}
	void SetLayerNameDialog::on_okButton_clicked()
	{
		emit sendLayerName(ui.name->text());
	}
}