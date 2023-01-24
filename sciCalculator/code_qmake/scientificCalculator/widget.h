#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "setwidget.h"
#include "calculate.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    bool shift = false;
    int config = 5;
    string ans_global = "0";

private slots:
    void on_Button_0_clicked();

    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_Button_left_clicked();

    void on_Button_right_clicked();

    void on_Button_shift_toggled(bool checked);

    void on_Button_add_clicked();

    void on_Button_sub_clicked();

    void on_Button_mul_clicked();

    void on_Button_div_clicked();

    void on_Button_pow_ln_clicked();

    void on_Button_sqrt_e_clicked();

    void on_Button_sin_clicked();

    void on_Button_cos_clicked();

    void on_Button_tan_clicked();

    void on_Button_point__clicked();

    void on_Button_ans_pai_clicked();

    void on_Button_del_clicked();

    void on_Button_ac_clicked();

    void on_Button_enter_clicked();

private:
    Ui::Widget *ui;
    QString text = "";
    QString answer = "";

public slots:
    void confSlot(int co);
};
#endif // WIDGET_H
