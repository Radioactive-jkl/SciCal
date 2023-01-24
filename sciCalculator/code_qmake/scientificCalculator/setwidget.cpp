#include "setwidget.h"
#include "ui_setwidget.h"

setwidget::setwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setwidget)
{
    ui->setupUi(this);

    this->setWindowTitle("set");

    ui->spinBox->setRange(0, 5);
    ui->spinBox->setSingleStep(1);
    ui->spinBox->setPrefix("keep ");
    ui->spinBox->setSuffix(" place");
}
setwidget::~setwidget()
{
    delete ui;
}

void setwidget::on_roundButon_clicked()
{
    conf_1 = 0;
}

void setwidget::on_cutButton_clicked()
{
    conf_1 = 10;
}

void setwidget::on_spinBox_valueChanged(int arg1)
{
    conf_2 = arg1;
}


void setwidget::on_commitButton_clicked()
{
    conf = conf_1 + conf_2 + conf_3;
    emit sendToWidget(conf);
    this->close();
}


void setwidget::on_checkBox_stateChanged(int arg1)
{
    switch (arg1)
    {
    case Qt::Checked:
        conf_3 = 100;
        break;
    case Qt::Unchecked:
        conf_3 = 0;
    }
}
