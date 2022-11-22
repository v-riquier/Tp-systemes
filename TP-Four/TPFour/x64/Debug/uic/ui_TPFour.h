/********************************************************************************
** Form generated from reading UI file 'TPFour.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPFOUR_H
#define UI_TPFOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPFourClass
{
public:
    QWidget *centralWidget;
    QSlider *slideTemperature;
    QPushButton *btnAllumer;
    QPushButton *btnEteindre;
    QLabel *lblPuissance;
    QLabel *lblnbPuissance;
    QLabel *lblnbTemperature;
    QLabel *lblTemperature;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPFourClass)
    {
        if (TPFourClass->objectName().isEmpty())
            TPFourClass->setObjectName(QString::fromUtf8("TPFourClass"));
        TPFourClass->resize(600, 400);
        centralWidget = new QWidget(TPFourClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        slideTemperature = new QSlider(centralWidget);
        slideTemperature->setObjectName(QString::fromUtf8("slideTemperature"));
        slideTemperature->setGeometry(QRect(79, 160, 391, 22));
        slideTemperature->setMaximum(100);
        slideTemperature->setOrientation(Qt::Horizontal);
        btnAllumer = new QPushButton(centralWidget);
        btnAllumer->setObjectName(QString::fromUtf8("btnAllumer"));
        btnAllumer->setGeometry(QRect(80, 60, 131, 41));
        btnEteindre = new QPushButton(centralWidget);
        btnEteindre->setObjectName(QString::fromUtf8("btnEteindre"));
        btnEteindre->setGeometry(QRect(340, 60, 131, 41));
        lblPuissance = new QLabel(centralWidget);
        lblPuissance->setObjectName(QString::fromUtf8("lblPuissance"));
        lblPuissance->setGeometry(QRect(80, 240, 61, 21));
        lblnbPuissance = new QLabel(centralWidget);
        lblnbPuissance->setObjectName(QString::fromUtf8("lblnbPuissance"));
        lblnbPuissance->setGeometry(QRect(140, 240, 61, 21));
        lblnbTemperature = new QLabel(centralWidget);
        lblnbTemperature->setObjectName(QString::fromUtf8("lblnbTemperature"));
        lblnbTemperature->setGeometry(QRect(410, 240, 61, 21));
        lblTemperature = new QLabel(centralWidget);
        lblTemperature->setObjectName(QString::fromUtf8("lblTemperature"));
        lblTemperature->setGeometry(QRect(340, 240, 71, 21));
        TPFourClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPFourClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TPFourClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPFourClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPFourClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPFourClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPFourClass->setStatusBar(statusBar);

        retranslateUi(TPFourClass);
        QObject::connect(btnAllumer, SIGNAL(clicked()), TPFourClass, SLOT(allumerFour()));
        QObject::connect(btnEteindre, SIGNAL(clicked()), TPFourClass, SLOT(eteindreFour()));
        QObject::connect(slideTemperature, SIGNAL(valueChanged(int)), TPFourClass, SLOT(sliderTemp()));

        QMetaObject::connectSlotsByName(TPFourClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPFourClass)
    {
        TPFourClass->setWindowTitle(QCoreApplication::translate("TPFourClass", "TPFour", nullptr));
        btnAllumer->setText(QCoreApplication::translate("TPFourClass", "Allumer", nullptr));
        btnEteindre->setText(QCoreApplication::translate("TPFourClass", "Eteindre", nullptr));
        lblPuissance->setText(QCoreApplication::translate("TPFourClass", "Puissance :", nullptr));
        lblnbPuissance->setText(QString());
        lblnbTemperature->setText(QString());
        lblTemperature->setText(QCoreApplication::translate("TPFourClass", "Temperature :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPFourClass: public Ui_TPFourClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPFOUR_H
