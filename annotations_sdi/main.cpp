#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //starting event loop
    MainWindow w;
    w.show();

    return a.exec();
}
