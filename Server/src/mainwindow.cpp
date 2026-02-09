#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
{
    setWindowTitle("Server");
    setMinimumSize(100, 100);

    show();
}

MainWindow::~MainWindow()
{

}
