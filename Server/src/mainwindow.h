#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qt6/QtWidgets/QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
};

#endif //MAINWINDOW_H