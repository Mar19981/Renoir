#include "PixmapExport.h"
#include <iostream>
namespace renoir
{
	PixmapExport::PixmapExport(QPixmap& img, QWidget* parent): map(img)
	{
		ui.setupUi(this);
		connect(ui.exportButton, SIGNAL(accepted()), this, SLOT(saving()));
		connect(ui.exportButton, SIGNAL(rejected()), this, SLOT(reject()));
	}
	PixmapExport::~PixmapExport()
	{
	}
	void PixmapExport::saving()
	{
		PixmapMode mode{};
		QString filter{};
		if (ui.grayscaleBinRadio->isChecked())
			mode = PixmapMode::GRAYSCALE_BIN;
		else if (ui.grayscaleTxtRadio->isChecked())
			mode = PixmapMode::GRAYSCALE_TXT;
		else if (ui.colorBinRadio->isChecked())
			mode = PixmapMode::COLOR_BIN;
		else if (ui.colorTxtRadio->isChecked())
			mode = PixmapMode::COLOR_TXT;
		filter = mode == PixmapMode::COLOR_BIN || mode == PixmapMode::COLOR_TXT ? "Portable pixmap (*.ppm)" : "Portable graymap (*.pgm)";
		auto currentPath = std::filesystem::current_path().string();
		auto filePath = QFileDialog::getSaveFileName(this, tr("Save portable anymap"), currentPath.c_str(), filter);
		if (!ui.overrideCheckbox->isChecked() || ui.overrideValue->value() == 255)
			Exporter::asPortableAnymap(filePath.toStdString(), map, mode);
		else
			Exporter::asPortableAnymap(filePath.toStdString(), map, mode, ui.overrideValue->value());
			
		accept();
	}
}