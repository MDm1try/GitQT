#include "mainwindow.h"
#include <QApplication>


int pow (int a) {
    return a * a;
}

// An example function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
      return x;
    else
      return y;
}

int min(int x, int y)
{
    if (x > y)
      return y;
    else
      return x;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int a = pow(10);
    int b = pow(10);
    int c = a + b;
    return a.exec();
}
