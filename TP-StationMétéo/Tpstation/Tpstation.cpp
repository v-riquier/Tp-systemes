#include "Tpstation.h"

Tpstation::Tpstation(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	carteES = K8055Adapter::getInstance();
	carteES->OpenDevice(0);
	QSqlDatabase BDD = QSqlDatabase::addDatabase("QMYSQL");
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

Tpstation::~Tpstation()
{}

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

/* Récupération des valeurs */
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
		query.exec("INSERT INTO `meteo`(`valeurBrut`, `tension`, `temperature`) VALUES(" + valueRecue + "," + tension + "," + temp + ")");
		
		ui.valTension->setText(tension + " V");
		ui.valTemp->setText(temp + " °C");
	}
	else {
		ui.valTemp->setText("NULL");
	}
}