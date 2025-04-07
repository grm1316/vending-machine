/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbMilk;
    QPushButton *pbReset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(926, 290);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(300, 20, 251, 71));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");
        pb10->setGeometry(QRect(100, 100, 87, 26));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");
        pb50->setGeometry(QRect(100, 130, 87, 26));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");
        pb100->setGeometry(QRect(100, 160, 87, 26));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");
        pb500->setGeometry(QRect(100, 190, 87, 26));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName("pbCoffee");
        pbCoffee->setGeometry(QRect(210, 100, 87, 26));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName("pbTea");
        pbTea->setGeometry(QRect(210, 130, 87, 26));
        pbMilk = new QPushButton(Widget);
        pbMilk->setObjectName("pbMilk");
        pbMilk->setGeometry(QRect(210, 160, 87, 26));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(210, 190, 87, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
