#include "Tpcloches.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tpcloches w;
    w.show();
    return a.exec();
}
