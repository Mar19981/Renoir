#include "Text.h"
namespace renoir
{
	Text::Text(const QString& text, QGraphicsItem* parent): QGraphicsSimpleTextItem(text, parent), Layer(LayerType::TEXT)
	{
	}
	void Text::setIndex(double value)
	{
		index = value;
		setZValue(value);
	}
	void Text::setBlendingMode(BlendingMode mode)
	{
		Layer::setBlendingMode(mode);
		update();
	}

	void Text::setActiveBrush(Brush* brush)
	{
	}

	void Text::setMovable(bool value)
	{
		setFlag(QGraphicsItem::GraphicsItemFlag::ItemIsMovable, value);
	}

	void Text::toogleVisibility()
	{
		hidden = !hidden;
		if (isVisible())
			setVisible(false);
		else
			setVisible(true);
	}

	void Text::updatePixmap(QImage& img)
	{
	}

	QPixmap Text::getPixmap()
	{
		throw std::runtime_error("Unable to get pixmap!\n");
	}

	void Text::fillLayer(QColor& fill)
	{
		setBrush(QBrush(fill));
	}

	void Text::setPen(QPen& pen)
	{
		QGraphicsSimpleTextItem::setPen(pen);
	}

	void Text::setText(QString& txt)
	{
		QGraphicsSimpleTextItem::setText(txt);
	}

	void Text::setPoint(QPointF& pos)
	{
		setPos(pos);
	}

	void Text::setRect(QRectF rect)
	{
	}

	void Text::setFont(QFont& font)
	{
		QGraphicsSimpleTextItem::setFont(font);
	}

	QBrush Text::getBrush()
	{
		return brush();
	}

	QPen Text::getPen()
	{
		return pen();
	}

	QString Text::getText()
	{
		return text();
	}

	QPointF Text::getPoint()
	{
		return pos();
	}

	QRectF Text::getRect()
	{
		throw std::runtime_error("Can't get the rectangle from this object!\n");
	}

	QFont Text::getFont()
	{
		return font();
	}

	void Text::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
	{
		painter->setCompositionMode(blendingMode);
		QGraphicsSimpleTextItem::paint(painter, option, widget);
	}

	void Text::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
	{
		if (!locked && active)
			QGraphicsSimpleTextItem::mouseMoveEvent(event);
	}

}
