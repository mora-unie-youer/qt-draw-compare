#ifndef __QT_DRAW_COMPARE__MAIN_WINDOW_HH__
#define __QT_DRAW_COMPARE__MAIN_WINDOW_HH__

#include <QMainWindow>

// Main window widget
class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	/**
	 * @brief Create main window widget
	 *
	 * @param parent parent widget
	 */
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
};

#endif//__QT_DRAW_COMPARE__MAIN_WINDOW_HH__
