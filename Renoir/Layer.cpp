#include "Layer.h"
namespace renoir
{
	Layer::Layer(LayerType t) : locked(false), active(true), blendingMode(QPainter::CompositionMode::CompositionMode_SourceOver), type(t), index(1.0), activeBrush(nullptr), hidden(false)
	{
	}

	void Layer::setActive(bool val)
	{
		active = val;
	}
	void Layer::toogleLocked()
	{
		locked = !locked;
	}
	double Layer::getIndex() const
	{
		return index;
	}
	LayerType Layer::getLayerType() const
	{
		return type;
	}
	void Layer::setBlendingMode(BlendingMode mode)
	{
		switch (mode)
		{
		case BlendingMode::NORMAL: blendingMode = QPainter::CompositionMode::CompositionMode_SourceOver; break;
		case BlendingMode::ADD: blendingMode = QPainter::CompositionMode::CompositionMode_Plus; break;
		case BlendingMode::LIGHTEN: blendingMode = QPainter::CompositionMode::CompositionMode_Lighten; break;
		case BlendingMode::MULTIPLY: blendingMode = QPainter::CompositionMode::CompositionMode_Multiply; break;
		case BlendingMode::SCREEN: blendingMode = QPainter::CompositionMode::CompositionMode_Screen; break;
		case BlendingMode::DARKEN: blendingMode = QPainter::CompositionMode::CompositionMode_Darken; break;
		case BlendingMode::COLOR_BURN: blendingMode = QPainter::CompositionMode::CompositionMode_ColorBurn; break;
		case BlendingMode::COLOR_DODGE: blendingMode = QPainter::CompositionMode::CompositionMode_ColorDodge; break;
		case BlendingMode::OVERLAY: blendingMode = QPainter::CompositionMode::CompositionMode_Overlay; break;
		case BlendingMode::SOFT_LIGHT: blendingMode = QPainter::CompositionMode::CompositionMode_SoftLight; break;
		case BlendingMode::HARD_LIGHT: blendingMode = QPainter::CompositionMode::CompositionMode_HardLight; break;
		case BlendingMode::DIFFERENCE: blendingMode = QPainter::CompositionMode::CompositionMode_Difference; break;
		}
	}
	Brush* Layer::getActiveBrush()
	{
		return activeBrush;
	}
	BlendingMode Layer::getBlendingMode() const
	{
		BlendingMode mode{};
		switch (blendingMode)
		{
		case QPainter::CompositionMode::CompositionMode_SourceOver: mode = BlendingMode::NORMAL; break;
		case QPainter::CompositionMode::CompositionMode_Plus: mode =  BlendingMode::ADD; break;
		case QPainter::CompositionMode::CompositionMode_Lighten: mode =  BlendingMode::LIGHTEN; break;
		case QPainter::CompositionMode::CompositionMode_Multiply: mode = BlendingMode::MULTIPLY; break;
		case QPainter::CompositionMode::CompositionMode_Screen: mode = BlendingMode::SCREEN; break;
		case QPainter::CompositionMode::CompositionMode_Darken: mode = BlendingMode::DARKEN; break;
		case QPainter::CompositionMode::CompositionMode_ColorBurn: mode = BlendingMode::COLOR_BURN; break;
		case QPainter::CompositionMode::CompositionMode_ColorDodge: mode = BlendingMode::COLOR_DODGE; break;
		case QPainter::CompositionMode::CompositionMode_Overlay: mode = BlendingMode::OVERLAY; break;
		case QPainter::CompositionMode::CompositionMode_SoftLight: mode = BlendingMode::SOFT_LIGHT; break;
		case QPainter::CompositionMode::CompositionMode_HardLight: mode = BlendingMode::HARD_LIGHT; break;
		case QPainter::CompositionMode::CompositionMode_Difference: mode = BlendingMode::DIFFERENCE; break;
		}
		return mode;
	}
	bool Layer::isHidden()
	{
		return hidden;
	}
}