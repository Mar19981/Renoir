#include "JuliaDialog.h"
namespace renoir
{
	JuliaDialog::JuliaDialog(int w, int h, QWidget* parent) : width(w), height(h)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendJulia(QImage)), parent, SLOT(receiveGeneratedMap(QImage)));
	}

	JuliaDialog::~JuliaDialog()
	{
	}
	void JuliaDialog::on_okButton_clicked()
	{
		std::complex<double> c(ui.realSpin->value(), ui.complexSpin->value() );
		Julia julia(width, height, ui.iterationsSpin->value(), ui.scale->value(), c);
		julia.generate();
		emit sendJulia(julia.getImage());
	}

}
