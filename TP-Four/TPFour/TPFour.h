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
#pragma once

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <QtWidgets/QMainWindow>
#include "Include/Dask64.h"
#include "ui_TPFour.h"
#include <QTimer>

class TPFour : public QMainWindow
{
    Q_OBJECT

public:
    TPFour(QWidget *parent = nullptr);
    ~TPFour();

public slots:
	void allumerFour();
	void eteindreFour();
	void sliderTemp();
	void getTemperature();

private:
    Ui::TPFourClass ui;
	I16 cardId;
	QTimer *timer;
};
