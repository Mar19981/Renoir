#pragma once

//Header file containing enums, describing various method modes.
namespace renoir
{
	enum class ChannelSelection
	{
		RGB, CHANNELS
	};
	enum class BlendingMode
	{
		NORMAL, ADD, LIGHTEN, MULTIPLY, SCREEN, DARKEN, COLOR_DODGE, COLOR_BURN, OVERLAY, SOFT_LIGHT, HARD_LIGHT, DIFFERENCE
	};
	//Describes the format of pixmap file.
	enum class PixmapMode
	{
		GRAYSCALE_TXT, COLOR_TXT, GRAYSCALE_BIN, COLOR_BIN
	};
	enum class ColorMode
	{
		COLOR, GRAYSCALE
	};
	enum class ImageFormat 
	{
		BMP, JPG, PNG
	};
	enum class Tool 
	{
		MOVE, SELECT, BRUSH, ERASER, RECTANGLE, ELLIPSE, TEXT}
	;
	enum class LayerType 
	{
		RASTER, ELLIPSE, RECTANGLE, TEXT
	};
	enum class Position 
	{
		TOP, BOTTOM, LEFT, RIGHT, UPPER_RIGHT, UPPER_LEFT, BOTTOM_RIGHT, BOTTOM_LEFT, CENTER
	};
	enum class Edges 
	{
		XY, X, Y
	};
}