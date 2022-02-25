#include "main_window.hh"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	m_drawWidget(new DrawWidget(parent))
{
	setCentralWidget(m_drawWidget);
}

MainWindow::~MainWindow()
{
}
