#include "NoiseDialog.h"
namespace renoir
{
	NoiseDialog::NoiseDialog(int w, int h, QWidget* parent): width(w), height(h)
	{
		ui.setupUi(this);
		connect(this, SIGNAL(sendNoise(QImage)), parent, SLOT(receiveGeneratedMap(QImage)));
	}
	NoiseDialog::~NoiseDialog()
	{
	}
	void NoiseDialog::on_okButton_clicked()
	{
		ColorMode mode{};
		switch (ui.comboBox->currentIndex())
		{
		case 0: mode = ColorMode::GRAYSCALE; break;
		case 1: mode = ColorMode::COLOR; break;
		default: throw std::runtime_error("Invalid color mode\n");
		}
		RandomNoise noise(width, height, mode);
		noise.generate();
		emit sendNoise(noise.getNoise());
	}
}