#include "LSystem.h"
namespace renoir
{
	std::string LSystem::createInstructionString()
	{
		std::string finalInstruction{ axiom };
		for (int i = 0; i < iterations; i++)
		{
			std::string tempString{};
			for (auto character : finalInstruction)
			{
				bool ruleFound{false};
				for (const auto& rule : rules)
				{
					if (rule.character == character)
					{
						ruleFound = true;;
						tempString += rule.result;
						break;
					}
				}
				if (!ruleFound)
					tempString += character;
			}
			finalInstruction = tempString;
		}
		return finalInstruction;
	}
	QPoint LSystem::getPosition()
	{
		switch (pos)
		{
		case Position::BOTTOM: return QPoint(width * 0.5, height);
		case Position::BOTTOM_LEFT: return QPoint(0, height);
		case Position::BOTTOM_RIGHT: return QPoint(width, height);
		case Position::LEFT: return QPoint(0, height * 0.5);
		case Position::CENTER: return QPoint(width * 0.5, height * 0.5);
		case Position::RIGHT: return QPoint(width, height);
		case Position::UPPER_RIGHT: return QPoint(width, 0);
		case Position::TOP: return QPoint(width * 0.5, 0);
		case Position::UPPER_LEFT: return QPoint(0, 0);
		}
	}
	LSystem::LSystem(const unsigned int _width, const unsigned int _height, const unsigned int it, const std::string& instr, const QColor& _color,
		const QColor& bg, const int _length, const int _brushSize, const bool _transparent, const float ang, const uint8_t alpha, std::list<Rule> lst, Position point):
		Fractal(_width, _height, it), axiom(instr), color(_color.red(),_color.green(),_color.blue(), alpha), background(bg), length(_length), brushSize(_brushSize),
		transparent(_transparent), angle(ang), rules(lst),pos(point)
	{
	}

	void LSystem::generate()
	{
		std::string instruction = createInstructionString();
		std::stack<QTransform> stackedTransform { };
		if (!transparent)
			img.fill(background);
		else
			img.fill(QColor(0, 0, 0, 0));
		QPainter painter(&img);
		painter.begin(&img);
		QBrush brush(color);
		QPen pen(brush,brushSize);
		painter.setPen(pen);
		painter.setBrush(brush);
		painter.translate(getPosition());
		painter.rotate(180.0f);
		for (const auto character : instruction)
		{
			switch (character)
			{
			case 'F': {
				painter.drawLine(0, 0, 0, length);
				painter.translate(0, length);
				}; break;
			case '-': {
				painter.rotate(-angle);
			}; break;
			case '+': {
				painter.rotate(angle);
			}; break;
			case '[': {
				stackedTransform.push(painter.transform());
			}; break;
			case ']': {
				auto prevTransform = stackedTransform.top();
				painter.setTransform(prevTransform);
				stackedTransform.pop();
			} break;
			}
		}



	}

}