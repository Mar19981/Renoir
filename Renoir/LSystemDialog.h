#pragma once
#include <QDialog>
#include <QColor>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QColorDialog>
#include <filesystem>
#include "ui_LSystemDialog.h"
#include <list>
#include <algorithm>
#include "LSystem.h"
#include "non_template_functions.h"
#include "functions.h"
#include <iostream>
#include <regex>
namespace renoir
{
	class LSystemDialog : public QDialog
	{
		Q_OBJECT;
		Ui::LSysDialog ui;
		std::list<Rule> rules;
		QString styleSheet;
		QColor color, background;
		std::string alphabet;
		std::regex reg;
		int width, height;

	public:
		explicit LSystemDialog(int w, int h, QWidget* parent = nullptr);
		~LSystemDialog();
	private slots:
		void on_addButton_clicked();
		void on_removeButton_clicked();
		void on_colorButton_clicked();
		void on_bgButton_clicked();
		void on_transparentCheck_clicked();
		void on_comboBox_activated(int i);
		void on_okButton_clicked();
	signals:
		void sendLSystem(QImage);
	};

}

