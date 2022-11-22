#pragma once

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <QtWidgets/QMainWindow>
#include "Include/Dask64.h"
#include "ui_TPFour.h"

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

private:
    Ui::TPFourClass ui;
	I16 cardId;
};
