#include "Base64Output.h"
namespace renoir
{
	Base64Output::Base64Output(const std::string& txt, QWidget* parent)
	{
		ui.setupUi(this);
		setBase64(txt);
	}
	Base64Output::~Base64Output()
	{
	}
	void Base64Output::setBase64(std::string txt)
	{
		ui.base64Text->setText(txt.c_str());
	}
	void Base64Output::on_copyButton_clicked()
	{
		QClipboard* clipboard = QApplication::clipboard();
		clipboard->setText(ui.base64Text->toPlainText());
	}
}