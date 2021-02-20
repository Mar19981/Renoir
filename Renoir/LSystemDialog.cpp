#include "LSystemDialog.h"
namespace renoir
{
	LSystemDialog::LSystemDialog(int w, int h, QWidget* parent) : width(w), height(h), styleSheet("background: rgb(<color>, <color>, <color>)"), color(QColor(0, 0, 0)), background(QColor(255, 255, 255)), alphabet("F]+[-"), reg("["+alphabet+"]")
	{
		ui.setupUi(this);
		QString fractalColor = changeStyleSheet(color, styleSheet).c_str(),
			bgColor = changeStyleSheet(background, styleSheet).c_str();
		ui.colorButton->setStyleSheet(fractalColor);
		ui.bgButton->setStyleSheet(bgColor);
		connect(this, SIGNAL(sendLSystem(QImage)), parent, SLOT(receiveGeneratedMap(QImage)));
	}

	LSystemDialog::~LSystemDialog()
	{
	}
	void LSystemDialog::on_addButton_clicked()
	{
		auto a = ui.ruleCharText->text();
		auto b = ui.ruleSeqText->text();
		if (!a.isEmpty() && !b.isEmpty())
		{
			ui.ruleCharText->clear();
			ui.ruleSeqText->clear();
			QString itemText = a + " -> " + b;
			Rule newRule{ a.toStdString().at(0), b.toStdString() };
			rules.push_back(newRule);
			ui.rulesList->addItem(itemText);
		}
	}
	void LSystemDialog::on_removeButton_clicked()
	{
		if (!rules.size())
			throw std::runtime_error("I don't have anything to remove!\n");
		std::for_each(rules.begin(), rules.end(), [](Rule rule) {std::clog << rule.character << " -> " << rule.result << '\n'; });
		int currentRow = ui.rulesList->currentRow();
		auto it = rules.begin();
		std:advance(it, currentRow);
		rules.erase(it);
		delete ui.rulesList->takeItem(currentRow);
		std::for_each(rules.begin(), rules.end(), [](Rule rule) {std::clog << rule.character << " -> " << rule.result << '\n'; });
	}

	void LSystemDialog::on_colorButton_clicked()
	{
		color = QColorDialog::getColor(Qt::white, this, "Pick fractal color");
		QString style = changeStyleSheet(color, styleSheet).c_str();
		ui.colorButton->setStyleSheet(style);
	}

	void LSystemDialog::on_bgButton_clicked()
	{
		background = QColorDialog::getColor(Qt::white, this, "Pick background color");
		QString style = changeStyleSheet(background, styleSheet).c_str();
		ui.bgButton->setStyleSheet(style);
	}

	void LSystemDialog::on_transparentCheck_clicked()
	{
		if (ui.transparentCheck->isChecked())
			ui.bgButton->setEnabled(false);
		else
			ui.bgButton->setEnabled(true);
	}

	void LSystemDialog::on_comboBox_activated(int i)
	{
		if (i)
		{
			std::string filePath = std::filesystem::current_path().string();
			rules.clear();
			ui.rulesList->clear();
			switch (i)
			{
			case 1: filePath += R"(\tree1.json)"; break;
			case 2: filePath += R"(\tree2.json)"; break;
			case 3: filePath += R"(\tree3.json)"; break;
			case 4: filePath += R"(\tree4.json)"; break;
			case 5: filePath += R"(\tree5.json)"; break;
			case 6: filePath += R"(\tree6.json)"; break;
			case 7: filePath += R"(\koch1.json)"; break;
			case 8: filePath += R"(\koch2.json)"; break;
			case 9: filePath += R"(\koch3.json)"; break;
			case 10: filePath += R"(\koch4.json)"; break;
			case 11: filePath += R"(\koch5.json)"; break;
			case 12: filePath += R"(\koch6.json)"; break;
			case 13: filePath += R"(\koch7.json)"; break;
			case 14: filePath += R"(\koch8.json)"; break;
			case 15: filePath += R"(\koch9.json)"; break;
			case 16: filePath += R"(\koch10.json)"; break;
			case 17: filePath += R"(\fass.json)"; break;
			case 18: filePath += R"(\fass2.json)"; break;

			}
			QByteArray jsonContent(getFileContent(filePath).c_str());
			QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonContent);
			QJsonObject jsonObj = jsonDoc.object();
			ui.axiomText->setText(jsonObj.value("axiom").toString());
			ui.angleSpin->setValue(jsonObj.value("angle").toDouble());
			auto rulesArr = jsonObj.value("rules").toArray();
			for (auto rule : rulesArr)
			{
				auto ruleObj = rule.toObject();
				Rule newRule{ ruleObj.value("character").toString().toStdString().at(0), ruleObj.value("result").toString().toStdString() };
				rules.push_back(newRule);
				std::string itemStr{};
				itemStr += newRule.character;
				itemStr += " -> ";
				itemStr += newRule.result;
				ui.rulesList->addItem(itemStr.c_str());
			}

		}
	}

	void LSystemDialog::on_okButton_clicked()
	{
		if (!ui.rulesList->count())
			throw std::runtime_error("There are no rules!\n");
		int alphaMapped = remap<float>(ui.opacitySpin->value(), 0.0, 1.0, 0.0, 255.0);
		int iter = ui.iterSpin->value(),
			len = ui.lengthSpin->value(),
			brushWidth = ui.widthSpin->value();
		std::string axiom = ui.axiomText->text().toStdString();
		float angle = ui.angleSpin->value();
		bool transp = ui.transparentCheck->isChecked();
		LSystem lSys(width, height, iter, axiom, color, background, len, brushWidth, transp, angle, alphaMapped, rules, static_cast<Position>(ui.posCombo->currentIndex()));
		lSys.generate();
		emit sendLSystem(lSys.getImage());
	}

}
