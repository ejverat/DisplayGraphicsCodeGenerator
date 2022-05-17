#include "dgcgmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DGCGMain w;
    w.show();
    return a.exec();
}
