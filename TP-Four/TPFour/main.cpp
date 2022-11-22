/*********************************************************************************************/
//* Programme : TpFour.h date : 22/11/2022
//*---------------------------------------------------------------------------------------------------------
//* derni�re mise a jour : 22/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Obtenir la temperature du four
//*Programmes associ�s : AUCUN
//*********************************************************************************************/
#include "TPFour.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TPFour w;
    w.show();
    return a.exec();
}
