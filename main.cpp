#include "mainwindow.h"
#include <QApplication>


int pow (int a) {
    return a * a;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int a = pow(10);
    return a.exec();
}
