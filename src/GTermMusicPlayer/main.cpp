#include "GTermMainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GTermMainWindow w;
    w.show();
    return a.exec();
}
