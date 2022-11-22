/*********************************************************************************************/
//* Programme : TpFour.h date : 09/11/2022
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 09/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Obtenir la temperature du four
//*Programmes associés : AUCUN
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
