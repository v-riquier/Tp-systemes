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
	ui.AffConnexion->setText("Connecté");
}

void Tpcloches::onSocketDisconnected() {
	ui.AffConnexion->setText("Déconnecté");
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

void Tpcloches::onDisconnectButtonClicked() {
	socket->disconnectFromHost();
}

void Tpcloches::BtnCloche1Clicked() {
	if (socket->state() == QAbstractSocket::ConnectedState) {
		char trameClocheMarche[12];
		char trameClocheArret[12];

		trameClocheMarche[0] = 0x00;
		trameClocheMarche[1] = 0x01;
		trameClocheMarche[2] = 0x00;
		trameClocheMarche[3] = 0x00;
		trameClocheMarche[4] = 0x00;
		trameClocheMarche[5] = 0x06;
		trameClocheMarche[6] = 0x11;
		trameClocheMarche[7] = 0x06;
		trameClocheMarche[8] = 0x00;
		trameClocheMarche[9] = 0x02;
		trameClocheMarche[10] = 0x00;
		trameClocheMarche[11] = 0x01;

		QByteArray donneesMarche(trameClocheMarche, 12);
		socket->write(donneesMarche);

		trameClocheArret[0] = 0x00;
		trameClocheArret[1] = 0x01;
		trameClocheArret[2] = 0x00;
		trameClocheArret[3] = 0x00;
		trameClocheArret[4] = 0x00;
		trameClocheArret[5] = 0x06;
		trameClocheArret[6] = 0x11;
		trameClocheArret[7] = 0x06;
		trameClocheArret[8] = 0x00;
		trameClocheArret[9] = 0x02;
		trameClocheArret[10] = 0x00;
		trameClocheArret[11] = 0x00;

		QByteArray donneesArret(trameClocheArret, 12);
		socket->write(donneesArret);

		ui.StatusCo->setText("La cloche 1 a sonnée");
	}
	else ui.StatusCo->setText("Erreur de connexion");
}

void Tpcloches::BtnCloche2Clicked() {
	if (socket->state() == QAbstractSocket::ConnectedState) {
		char trameClocheMarche[12];
		char trameClocheArret[12];

		trameClocheMarche[0] = 0x00;
		trameClocheMarche[1] = 0x01;
		trameClocheMarche[2] = 0x00;
		trameClocheMarche[3] = 0x00;
		trameClocheMarche[4] = 0x00;
		trameClocheMarche[5] = 0x06;
		trameClocheMarche[6] = 0x11;
		trameClocheMarche[7] = 0x06;
		trameClocheMarche[8] = 0x00;
		trameClocheMarche[9] = 0x02;
		trameClocheMarche[10] = 0x00;
		trameClocheMarche[11] = 0x02;

		QByteArray donneesMarche(trameClocheMarche, 12);
		socket->write(donneesMarche);

		trameClocheArret[0] = 0x00;
		trameClocheArret[1] = 0x01;
		trameClocheArret[2] = 0x00;
		trameClocheArret[3] = 0x00;
		trameClocheArret[4] = 0x00;
		trameClocheArret[5] = 0x06;
		trameClocheArret[6] = 0x11;
		trameClocheArret[7] = 0x06;
		trameClocheArret[8] = 0x00;
		trameClocheArret[9] = 0x02;
		trameClocheArret[10] = 0x00;
		trameClocheArret[11] = 0x00;

		QByteArray donneesArret(trameClocheArret, 12);
		socket->write(donneesArret);

		ui.StatusCo->setText("La cloche 2 a sonnée");
	}
	else ui.StatusCo->setText("Erreur de connexion");
}

void Tpcloches::BtnCloche3Clicked() {
	if (socket->state() == QAbstractSocket::ConnectedState) {
		char trameClocheMarche[12];
		char trameClocheArret[12];

		trameClocheMarche[0] = 0x00;
		trameClocheMarche[1] = 0x01;
		trameClocheMarche[2] = 0x00;
		trameClocheMarche[3] = 0x00;
		trameClocheMarche[4] = 0x00;
		trameClocheMarche[5] = 0x06;
		trameClocheMarche[6] = 0x11;
		trameClocheMarche[7] = 0x06;
		trameClocheMarche[8] = 0x00;
		trameClocheMarche[9] = 0x02;
		trameClocheMarche[10] = 0x00;
		trameClocheMarche[11] = 0x04;

		QByteArray donneesMarche(trameClocheMarche, 12);
		socket->write(donneesMarche);

		trameClocheArret[0] = 0x00;
		trameClocheArret[1] = 0x01;
		trameClocheArret[2] = 0x00;
		trameClocheArret[3] = 0x00;
		trameClocheArret[4] = 0x00;
		trameClocheArret[5] = 0x06;
		trameClocheArret[6] = 0x11;
		trameClocheArret[7] = 0x06;
		trameClocheArret[8] = 0x00;
		trameClocheArret[9] = 0x02;
		trameClocheArret[10] = 0x00;
		trameClocheArret[11] = 0x00;

		QByteArray donneesArret(trameClocheArret, 12);
		socket->write(donneesArret);

		ui.StatusCo->setText("La cloche 3 a sonnée");
	}
	else ui.StatusCo->setText("Erreur de connexion");
}

void Tpcloches::BtnCloche4Clicked() {
	if (socket->state() == QAbstractSocket::ConnectedState) {
		char trameClocheMarche[12];
		char trameClocheArret[12];

		trameClocheMarche[0] = 0x00;
		trameClocheMarche[1] = 0x01;
		trameClocheMarche[2] = 0x00;
		trameClocheMarche[3] = 0x00;
		trameClocheMarche[4] = 0x00;
		trameClocheMarche[5] = 0x06;
		trameClocheMarche[6] = 0x11;
		trameClocheMarche[7] = 0x06;
		trameClocheMarche[8] = 0x00;
		trameClocheMarche[9] = 0x02;
		trameClocheMarche[10] = 0x00;
		trameClocheMarche[11] = 0x08;

		QByteArray donneesMarche(trameClocheMarche, 12);
		socket->write(donneesMarche);

		trameClocheArret[0] = 0x00;
		trameClocheArret[1] = 0x01;
		trameClocheArret[2] = 0x00;
		trameClocheArret[3] = 0x00;
		trameClocheArret[4] = 0x00;
		trameClocheArret[5] = 0x06;
		trameClocheArret[6] = 0x11;
		trameClocheArret[7] = 0x06;
		trameClocheArret[8] = 0x00;
		trameClocheArret[9] = 0x02;
		trameClocheArret[10] = 0x00;
		trameClocheArret[11] = 0x00;

		QByteArray donneesArret(trameClocheArret, 12);
		socket->write(donneesArret);

		ui.StatusCo->setText("La cloche 4 a sonnée");
	}
	else ui.StatusCo->setText("Erreur de connexion");
}

void Tpcloches::ControleClavier() {
	QString number = ui.CClavierEdit->text();
	bool ok;
	int numero = number.toInt(&ok);
	if (ok) {
		switch (numero) {
		case 1:
			BtnCloche1Clicked();
			break;
		case 2:
			BtnCloche2Clicked();
			break;
		case 3:
			BtnCloche3Clicked();
			break;
		case 4:
			BtnCloche4Clicked();
			break;
		default:
			ui.StatusCo->setText("Erreur de connexion");
			break;
		}
	}
	ui.CClavierEdit->clear();
}

Tpcloches::~Tpcloches()
{}