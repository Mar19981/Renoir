#include "Ellipse.h"

namespace renoir
{

	Ellipse::Ellipse(const QRectF& rect, QGraphicsItem* parent): QGraphicsEllipseItem(rect, parent), Layer(LayerType::ELLIPSE)
	{
	}
	void Ellipse::setIndex(double value)
	{
		index = value;
		setZValue(value);
	}

	void Ellipse::setBlendingMode(BlendingMode mode)
	{
		Layer::setBlendingMode(mode);
		update();
	}

	void Ellipse::setActiveBrush(Brush* brush)
	{
	}

	void Ellipse::setMovable(bool value)
	{
		setFlag(QGraphicsItem::GraphicsItemFlag::ItemIsMovable, value);
	}

	void Ellipse::toogleVisibility()
	{
		hidden = !hidden;
		if (isVisible())
			setVisible(false);
		else
			setVisible(true);
	}

	void Ellipse::updatePixmap(QImage& img)
	{
	}

	QPixmap Ellipse::getPixmap()
	{
		throw std::runtime_error("Unable to get pixmap!\n");
	}

	void Ellipse::fillLayer(QColor& fill)
	{
		setBrush(QBrush(fill));
	}

	void Ellipse::setPen(QPen& pen)
	{
		QGraphicsEllipseItem::setPen(pen);
	}

	void Ellipse::setText(QString& txt)
	{
	}

	void Ellipse::setPoint(QPointF& pos)
	{
		setPos(pos);
	}

	void Ellipse::setRect(QRectF rect)
	{
		QGraphicsEllipseItem::setRect(rect);
	}

	void Ellipse::setFont(QFont& font)
	{
	}

	QBrush Ellipse::getBrush()
	{
		return brush();
	}

	QPen Ellipse::getPen()
	{
		return pen();
	}

	QString Ellipse::getText()
	{
		throw std::runtime_error("Can't get the text from this object!\n");
	}

	QPointF Ellipse::getPoint()
	{
		return pos();
	}

	QRectF Ellipse::getRect()
	{
		return rect();
	}

	QFont Ellipse::getFont()
	{
		throw std::runtime_error("Can't get the font from this object!\n");
	}

	void Ellipse::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
	{
		painter->setCompositionMode(blendingMode);
		QGraphicsEllipseItem::paint(painter, option, widget);
	}

	void Ellipse::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
	{
		if (!locked && active)
			QGraphicsEllipseItem::mouseMoveEvent(event);
	}
}
