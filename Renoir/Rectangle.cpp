#include "Rectangle.h"
namespace renoir
{
	Rectangle::Rectangle(const QRectF& rect, QGraphicsItem* parent): QGraphicsRectItem(rect, parent), Layer(LayerType::RECTANGLE)
	{
	}

	void Rectangle::setIndex(double value)
	{
		index = value;
		setZValue(value);
	}

	void Rectangle::setBlendingMode(BlendingMode mode)
	{
		Layer::setBlendingMode(mode);
		update();
	}

	void Rectangle::setActiveBrush(Brush* brush)
	{
	}

	void Rectangle::setMovable(bool value)
	{
		setFlag(QGraphicsItem::GraphicsItemFlag::ItemIsMovable, value);
	}

	void Rectangle::toogleVisibility()
	{
		hidden = !hidden;
		if (isVisible())
			setVisible(false);
		else
			setVisible(true);
	}

	void Rectangle::updatePixmap(QImage& img)
	{
	}

	QPixmap Rectangle::getPixmap()
	{
		throw std::runtime_error("Unable to get pixmap!\n");;
	}

	void Rectangle::fillLayer(QColor& fill)
	{
		setBrush(QBrush(fill));
	}

	void Rectangle::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
	{
		painter->setCompositionMode(blendingMode);
		QGraphicsRectItem::paint(painter, option, widget);
	}
	void Rectangle::setPen(QPen& pen)
	{
		QGraphicsRectItem::setPen(pen);
	}

	void Rectangle::setText(QString& txt)
	{
	}

	void Rectangle::setPoint(QPointF& pos)
	{
		setPos(pos);
	}

	void Rectangle::setRect(QRectF rect)
	{
		QGraphicsRectItem::setRect(rect);
	}

	void Rectangle::setFont(QFont& font)
	{
	}

	QBrush Rectangle::getBrush()
	{
		return brush();
	}

	QPen Rectangle::getPen()
	{
		return pen();
	}

	QString Rectangle::getText()
	{
		throw std::runtime_error("Can't get the text from this object!\n");
	}

	QPointF Rectangle::getPoint()
	{
		return pos();
	}

	QRectF Rectangle::getRect()
	{
		return rect();
	}

	QFont Rectangle::getFont()
	{
		throw std::runtime_error("Can't get the font from this object!\n");
	}
	void Rectangle::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
	{
		if (!locked && active)
			QGraphicsRectItem::mouseMoveEvent(event);
	}
}
