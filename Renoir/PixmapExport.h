#pragma once
#include <QDialog>
#include <QFileDialog>
#include <filesystem>
#include "enums.h"
#include "Exporter.h"
#include "ui_portable_anymap_export_dialog.h"
namespace renoir
{
	class PixmapExport : public QDialog
	{
		Q_OBJECT;
		Ui::PixmapExportDialog ui;
		QPixmap map;

	public:
		explicit PixmapExport(QPixmap& img, QWidget* parent = nullptr);
		virtual ~PixmapExport();
	private slots:
		void saving();
	};
}

