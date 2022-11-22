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

TPFour::TPFour(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	cardId = Register_Card(PCI_9111DG, 0);

	_getch();
}

void TPFour::allumerFour()
{
	timer = new QTimer(this);
	QObject::connect(timer, SIGNAL(timeout()), this, SLOT(getTemperature()));
	timer->start(3000);
	ui.lblnbPuissance->setText(QString::number(ui.slideTemperature->value()) + " %");
}

void TPFour::eteindreFour()
{
	QObject::disconnect(timer, SIGNAL(timeout()), this, SLOT(getTemperature()));
}

void TPFour::sliderTemp()
{
	int nvTemperature;
	ui.lblnbPuissance->setText(QString::number(ui.slideTemperature->value()) + " %");
	if (ui.slideTemperature->value() > 0) nvTemperature = ui.slideTemperature->value() / 10;

	AO_VWriteChannel(cardId, 0, nvTemperature);
}

void TPFour::getTemperature()
{
	double tension;
	AI_VReadChannel(cardId, 0, AD_B_10_V, &tension);
	double temp = tension;
	ui.lblnbTemperature->setText(QString::number(temp) + " �C");
}

TPFour::~TPFour()
{}
