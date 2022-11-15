/*********************************************************************************************
//* Programme : Tpstation.h date : 15/11/2022
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 15/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Obtenir une tension et une température depuis la station météo
//*Programmes associés : AUCUN
//*********************************************************************************************/
#pragma once

#include <QTimer>
#include <QtWidgets/QMainWindow>
#include "ui_Tpstation.h"
#include "K8055Adapter.h"
#include <QSqlDatabase>
#include <QtSql/QtSql>
#include <QSqlQuery>
#include <QtSql>

class Tpstation : public QMainWindow
{
    Q_OBJECT

public:
    Tpstation(QWidget *parent = nullptr);
    ~Tpstation();

public slots:
	void Allumage();
	void Eteindre();
	void getValue();

private:
    Ui::TpstationClass ui;
	QTimer *chrono;
	K8055Adapter * carteES;
};
