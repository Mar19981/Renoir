#include "MandelbrotDialog.h"
namespace renoir
{
	MandelbrotDialog::MandelbrotDialog(int w, int h, QWidget* parent) : width(w), height(h)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendMandelbrot(QImage)), parent, SLOT(receiveGeneratedMap(QImage)));
	}

	MandelbrotDialog::~MandelbrotDialog()
	{
	}
	void MandelbrotDialog::on_okButton_clicked()
	{
		Mandelbrot mandelbrot(width, height, ui.iterationsSpin->value(), ui.scale->value());
		mandelbrot.generate();
		emit sendMandelbrot(mandelbrot.getImage());
	}

}
