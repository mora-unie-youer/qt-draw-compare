#ifndef __QT_DRAW_COMPARE__DRAW_WIDGET_HH__
#define __QT_DRAW_COMPARE__DRAW_WIDGET_HH__

#include <QWidget>

class MainWindow;
// Draw widget
class DrawWidget : public QWidget
{
	Q_OBJECT
private:
	// Drawing color
	QColor m_drawColor;
	QPixmap m_pixmap;
	// Drawing canvas
	QImage m_canvas;
public:
	/**
	 * @brief Create new draw widget
	 *
	 * @param parent parent widget
	 */
	explicit DrawWidget(QWidget *parent = 0);
	~DrawWidget();
};

#endif//__QT_DRAW_COMPARE__DRAW_WIDGET_HH__
