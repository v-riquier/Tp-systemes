#include "Tpcloches.h"

Tpcloches::Tpcloches(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	QObject::connect(socket, SIGNAL(disconnected()), this, SLOT(onSocketDisconnected()));
}

void Tpcloches::onSocketConnected() {
	ui.AffConnexion->setText("Connecte");
}

void Tpcloches::onConnectButtonClicked() {
	QString ip = ui.IPEdit->text();
	QString port = ui.PortEdit->text();

	bool ok;
	int portasint = port.toInt(&ok);
	if (ok) {
		socket->connectToHost(ip, portasint);
	}
}

void Tpcloches::BtnCloche1Clicked() {

}

void Tpcloches::BtnCloche2Clicked() {

}

void Tpcloches::BtnCloche3Clicked() {

}

void Tpcloches::BtnCloche4Clicked() {

}

Tpcloches::~Tpcloches()
{}