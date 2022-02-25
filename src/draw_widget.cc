#include "draw_widget.hh"

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent)
{
	m_canvas = QImage(width(), height(), QImage::Format_RGB888);
	m_drawColor = QColor(Qt::black);
	m_canvas.fill(QColor(Qt::white));
}

DrawWidget::~DrawWidget()
{
}
