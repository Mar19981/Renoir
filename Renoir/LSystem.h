#pragma once
#include <array>
#include <string>
#include "enums.h"
#include "Fractal.h"
#include <stack>
#include <QPixmap>
#include <QPainter>
#include <QPen>
namespace renoir
{
	struct Rule
	{
		char character;
		std::string result;
	};
	class LSystem : public Fractal
	{
		std::string axiom;
		unsigned int length, brushSize;
		QColor color, background;
		float angle;
		bool transparent;
		Position pos;
		std::list<Rule> rules;
		std::string createInstructionString();

		QPoint getPosition();
	public:
		LSystem(const unsigned int _width, const unsigned int _height, const unsigned int it, const std::string& instr, const QColor& _color, 
			const QColor& bg, const int _length, const int _brushSize, const bool _transparent, const float ang, const uint8_t alpha, std::list<Rule> lst, Position point);
		void generate();
	};
}

