#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("scientificCalculator");

    this->setWindowFlags(Qt::WindowStaysOnTopHint);

    QFont textFont("Consolas",14);
    ui->lineEdit_text->setFont(textFont);
    ui->lineEdit_answer->setFont(textFont);

    ui->Button_shift->setCheckable(true);

    connect(ui->lineEdit_text, SIGNAL(returnPressed()), this, SLOT(on_Button_enter_clicked()));

}

Widget::~Widget()
{
    delete ui;
}


/***********
 * numbers *
 ***********/

void Widget::on_Button_0_clicked()
{
    text = ui->lineEdit_text->text() + "0";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_1_clicked()
{
    text = ui->lineEdit_text->text() + "1";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_2_clicked()
{
    text = ui->lineEdit_text->text() + "2";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_3_clicked()
{
    text = ui->lineEdit_text->text() + "3";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_4_clicked()
{
    text = ui->lineEdit_text->text() + "4";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_5_clicked()
{
    text = ui->lineEdit_text->text() + "5";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_6_clicked()
{
    text = ui->lineEdit_text->text() + "6";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_7_clicked()
{
    text = ui->lineEdit_text->text() + "7";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_8_clicked()
{
    text = ui->lineEdit_text->text() + "8";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_9_clicked()
{
    text = ui->lineEdit_text->text() + "9";
    ui->lineEdit_text->setText(text);
}


/***********
 * options *
 ***********/

//commonOpt
void Widget::on_Button_left_clicked()
{
    text = ui->lineEdit_text->text() + "(";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_right_clicked()
{
    text = ui->lineEdit_text->text() + ")";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_add_clicked()
{
    text = ui->lineEdit_text->text() + "+";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_sub_clicked()
{
    text = ui->lineEdit_text->text() + "-";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_mul_clicked()
{
    text = ui->lineEdit_text->text() + "*";
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_div_clicked()
{
    text = ui->lineEdit_text->text() + "/";
    ui->lineEdit_text->setText(text);
}

//shiftOpt
void Widget::on_Button_shift_toggled(bool checked)
{
    shift = checked;
    if(shift == true)
    {
        ui->Button_shift->setText("SHIFT");
        ui->Button_sin->setText("asin");
        ui->Button_cos->setText("acos");
        ui->Button_tan->setText("atan");
        ui->Button_point_->setText("%");
        ui->Button_pow_ln->setText("ln");
        ui->Button_sqrt_e->setText("e");
        ui->Button_ans_pai->setText("pi");
        ui->Button_enter->setText("set");
    }
    else
    {
        ui->Button_shift->setText("shift");
        ui->Button_sin->setText("sin");
        ui->Button_cos->setText("cos");
        ui->Button_tan->setText("tan");
        ui->Button_point_->setText(".");
        ui->Button_pow_ln->setText("^");
        ui->Button_sqrt_e->setText("sqrt");
        ui->Button_ans_pai->setText("Ans");
        ui->Button_enter->setText("=");
    }
}

void Widget::on_Button_pow_ln_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "ln(";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "^(";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_sqrt_e_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "e";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "sqrt(";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_sin_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "asin(";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "sin(";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_cos_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "acos(";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "cos(";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_tan_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "atan(";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "tan(";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_point__clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "%";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + ".";
        ui->lineEdit_text->setText(text);
    }
}

void Widget::on_Button_ans_pai_clicked()
{
    if(shift == true)
    {
        text = ui->lineEdit_text->text() + "pi";
        ui->lineEdit_text->setText(text);
    }
    else
    {
        text = ui->lineEdit_text->text() + "Ans";
        ui->lineEdit_text->setText(text);
    }
}

//controlOpt
void Widget::on_Button_del_clicked()
{
    text = ui->lineEdit_text->text();
    text.chop(1);
    ui->lineEdit_text->setText(text);
}

void Widget::on_Button_ac_clicked()
{
    text = ui->lineEdit_text->text();
    answer = ui->lineEdit_answer->text();
    text.clear();
    answer.clear();
    ui->lineEdit_text->setText(text);
    ui->lineEdit_answer->setText(answer);
}

void Widget::on_Button_enter_clicked()
{
    if(shift == true)
    {
        setwidget *configwidget = new setwidget;
        configwidget->show();
        Widget::connect(configwidget, &setwidget::sendToWidget, this, &Widget::confSlot);
    }
    else
    {
        text = ui->lineEdit_text->text();
        string temp = text.toStdString();
        ans_global = calculate(temp, ans_global, config);
        answer = QString(QString::fromLocal8Bit(ans_global.c_str()));
        ui->lineEdit_answer->setText(answer);
    }
}

void Widget::confSlot(int co)
{
    config = co;
    //qDebug("%d", config);
}
