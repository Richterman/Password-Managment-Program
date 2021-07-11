#include "mainwindow.h"

#include <QApplication>
#include <QObject>
#include <vector>
#include <string>
#include "classes.cpp"
#include <QList>







int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
