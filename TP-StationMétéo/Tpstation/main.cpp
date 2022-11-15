/*********************************************************************************************
//* Programme : main.cpp date : 15/11/2022
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 15/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Obtenir une tension et une température depuis la station météo
//*Programmes associés : AUCUN
//*********************************************************************************************/
#include "Tpstation.h"
#include <QtWidgets/QApplication>
#include "K8055Adapter.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    Tpstation w;
    w.show();
    return a.exec();
}
