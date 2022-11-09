#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Tpcloches.h"

class Tpcloches : public QMainWindow
{
    Q_OBJECT

public:
    Tpcloches(QWidget *parent = nullptr);
    ~Tpcloches();

private:
    Ui::TpclochesClass ui;
};
