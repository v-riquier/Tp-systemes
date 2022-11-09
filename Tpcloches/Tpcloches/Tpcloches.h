/*********************************************************************************************
//* Programme : Tpcloches.h date : 09/11/2022
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 09/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Faire sonner les cloches
//*Programmes associés : AUCUN
//*********************************************************************************************/

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Tpcloches.h"
#include <qtcpsocket.h>

class Tpcloches : public QMainWindow
{
    Q_OBJECT

public:
    Tpcloches(QWidget *parent = nullptr);
    ~Tpcloches();

public slots:
	void onConnectButtonClicked();
	void onDisconnectButtonClicked();
	void onSocketConnected();
	void onSocketDisconnected();
	void BtnCloche1Clicked();
	void BtnCloche2Clicked();
	void BtnCloche3Clicked();
	void BtnCloche4Clicked();
	void ControleClavier();

private:
    Ui::TpclochesClass ui;
	QTcpSocket * socket;
};
