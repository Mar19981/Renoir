#pragma once
#include <QDialog>
#include "ui_setLayerNameDialog.h"
namespace renoir
{
	class SetLayerNameDialog : public QDialog
	{
		Q_OBJECT;
		Ui::setLayerNameDialog ui;
	public:
		SetLayerNameDialog(const QString& txt, QWidget* parent = nullptr);
	private slots:
		void on_okButton_clicked();
	signals:
		void sendLayerName(QString& name);
	};

}

