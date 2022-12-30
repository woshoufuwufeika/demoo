#include "widget.h"
#include "ui_widget.h"
#include<QColorDialog>

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


void Widget::on_colorPushButton_clicked()
{
    color=QColorDialog::getColor(color,this);

    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
        ui->textEdit->setFocus();
    }
}



void Widget::on_wordPushButton_clicked()
{
    if(this->isBolded==0)
    {ui->textEdit->setFontWeight(QFont::Bold);
        this->isBolded=1;
    }
    else
    {ui->textEdit->setFontWeight(QFont::Normal);
        this->isBolded=0;
    }

    ui->textEdit->setFocus();
}

