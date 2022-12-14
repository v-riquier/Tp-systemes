/*********************************************************************************************
//* Programme : Tpstation.cpp date : 15/11/2022
//*---------------------------------------------------------------------------------------------------------
//* derni?re mise a jour : 15/11/2022
//*
//*Programmeurs : Riquier Vincent classe : BTSSN2
//* Ciss Aissatou
//*--------------------------------------------------------------------------------------------------------
//* BUT : Obtenir une tension et une temp?rature depuis la station m?t?o
//*Programmes associ?s : AUCUN
//*********************************************************************************************/
#include "Tpstation.h"

Tpstation::Tpstation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	carteES = K8055Adapter::getInstance();
	carteES->OpenDevice(0);
	QSqlDatabase BDD = QSqlDatabase::addDatabase("METEO");
	BDD.setHostName("192.168.65.35");
	BDD.setUserName("root");
	BDD.setPassword("root");
	BDD.setDatabaseName("Station");

	if (BDD.open() == true) {
		qDebug() << "BDD : Nouvelle connexion";
	}
	else {
		qDebug() << "BDD: Erreur de connexion";
	}
}

void Tpstation::Allumage()
{
	chrono = new QTimer(this);
	QObject::connect(chrono, SIGNAL(timeout()), this, SLOT(getValue()));

	chrono->start(5000);
}

void Tpstation::Eteindre()
{
	QObject::disconnect(chrono, SIGNAL(timeout()), this, SLOT(getValue()));
}

/* R?cup?ration des valeurs */
void Tpstation::getValue()
{
	QString valueRecue = QString::number(carteES->ReadAnalogChannel(1));
	if (valueRecue > 0) {
		float valeurRecue = valueRecue.toFloat();
		float valeurTension = (valeurRecue / 255) * 5;
		float valeurTemperature = (valeurTension * 90 / 5) - 30;

		QString tension = QString::number(valeurTension);
		QString temp = QString::number(valeurTemperature);

		QSqlQuery query;
		query.prepare("INSERT INTO `Meteo`(`ValeurRecue`, `Tension`, `Temperature`) VALUES(:valeur, :tension, :temperature)");
		query.bindValue(":valeur", valeurRecue);
		query.bindValue(":tension", valeurTension);
		query.bindValue(":temperature", valeurTemperature);
		query.exec();

		ui.valTension->setText(tension + " V");
		ui.valTemp->setText(temp + " ?C");
	}
	else {
		ui.valTemp->setText("NULL");
	}
}

Tpstation::~Tpstation()
{}