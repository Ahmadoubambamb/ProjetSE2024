#include "mainwindow.h"
#include <QApplication>
//#include "fifo.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
  //fifo f(4);
    return a.exec();
}
