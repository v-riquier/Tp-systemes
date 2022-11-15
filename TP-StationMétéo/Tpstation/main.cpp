#include "Tpstation.h"
#include <QtWidgets/QApplication>
#include "K8055Adapter.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    Tpstation w;
    w.show();
    return a.exec();
	/*carteES->CloseDevice();
	K8055Adapter::freeInstance();*/
}
