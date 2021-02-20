#include "Base64ExportDialog.h"
namespace renoir
{
	Base64ExportDialog::Base64ExportDialog(QPixmap& map, QWidget* parent): img(map)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendBase64Result(std::string&)), parent, SLOT(createBase64Output(std::string&)));
	}
	Base64ExportDialog::~Base64ExportDialog()
	{
	}
	void Base64ExportDialog::on_okButton_clicked()
	{
		auto base64 = Exporter::asBase64(img, static_cast<ImageFormat>(ui.formatBox->currentIndex()));
		if (!ui.clipboardCheck->isChecked())
			emit sendBase64Result(base64);
		else
		{
			QClipboard* clipboard = QApplication::clipboard();
			clipboard->setText(base64.c_str());
		}
	}
}