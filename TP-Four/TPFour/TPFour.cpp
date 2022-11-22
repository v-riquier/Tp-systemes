#include "TPFour.h"

TPFour::TPFour(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	cardId = Register_Card(PCI_9111DG, 0);
	if (cardId >= 0)
	{
		std::cout << "Ouverture carte OK" << std::endl;

		AI_9111_Config(cardId, TRIG_INT_PACER, P9111_TRGMOD_SOFT, 0);

		double tension;

		if (AI_VReadChannel(cardId, 0, AD_B_10_V, &tension) < 0)
			std::cout << "Erreur lecture" << std::endl;
		else
		{
			std::cout << "Tension : " << tension << std::endl;
		}

		Release_Card(cardId);
	}

	_getch();
}

void TPFour::allumerFour()
{
}

void TPFour::eteindreFour()
{
}

void TPFour::sliderTemp()
{
	int nvTemperature;
	ui.lblnbPuissance->setText(QString::number(ui.slideTemperature->value()) + " %");
	if (ui.slideTemperature->value() > 0) nvTemperature = ui.slideTemperature->value()/10;

	AO_VWriteChannel(cardId, 0, nvTemperature);
}

TPFour::~TPFour()
{}
