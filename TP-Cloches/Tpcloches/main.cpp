/*********************************************************************************************
//* Programme : main.cpp date : 09/11/2022
//*---------------------------------------------------------------------------------------------------------
//* derni�re mise a jour : 09/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Faire sonner les cloches
//*Programmes associ�s : AUCUN
//*********************************************************************************************/

#include "Tpcloches.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tpcloches w;
    w.show();
    return a.exec();
}
