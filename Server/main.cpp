#include <qt6/QtWidgets/QApplication>

#include "src/mainwindow.h"

auto main(int argc, char* argv[]) -> int {
    QApplication app(argc, argv);
    MainWindow w;
    app.exec();
    return 0;
}