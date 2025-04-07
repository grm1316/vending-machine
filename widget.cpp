#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoeny(int diff) {
    money += diff;
    ui->lcdNumber->display(money);
}

void Widget::minuserror(int a) {
    if((money + a) < 0){
        QMessageBox mb;
        mb.information(nullptr,"wrong","you need more moeny");
    }
    else {
        changeMoeny(a);
    }
}

void Widget::on_pb10_clicked()
{
    changeMoeny(10);
}


void Widget::on_pb100_clicked()
{
   changeMoeny(100);
}


void Widget::on_pb50_clicked()
{
    changeMoeny(50);
}


void Widget::on_pb500_clicked()
{
    changeMoeny(500);
}


void Widget::on_pbCoffee_clicked()
{
   minuserror(-100);
}


void Widget::on_pbTea_clicked()
{
    minuserror(-150);
}

void Widget::on_pbMilk_clicked()
{
    minuserror(-200);
}

void Widget::exchange(int b, int coin[4]){
    int exchangelist[] = {500,100,50,10};
    int i = 0;

    while((i < 4 )&& (b > 0)){
        coin[i] = b / exchangelist[i];
        b %= exchangelist[i];
        i++;
    }
}

void Widget::on_pbReset_clicked()
{
    int exchangelist[] = {500,100,50,10};
    int coin[4] = {0};
    char result[256] = "exchange list\n";

    exchange(money, coin);

    for (int i = 0; i < 4; i++) {
        char line[50];
        sprintf(line, "%d원 %d개\n", exchangelist[i], coin[i]);
        strcat(result, line);
    }

    QMessageBox mb;
    mb.information(nullptr,"exchange",result);
}




