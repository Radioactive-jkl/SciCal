/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button_ans_pai;
    QPushButton *Button_del;
    QPushButton *Button_add;
    QPushButton *Button_tan;
    QPushButton *Button_4;
    QPushButton *Button_0;
    QLineEdit *lineEdit_answer;
    QPushButton *Button_shift;
    QPushButton *Button_6;
    QPushButton *Button_point_;
    QPushButton *Button_sub;
    QPushButton *Button_right;
    QPushButton *Button_1;
    QPushButton *Button_sin;
    QPushButton *Button_mul;
    QPushButton *Button_9;
    QPushButton *Button_5;
    QPushButton *Button_enter;
    QPushButton *Button_left;
    QPushButton *Button_3;
    QPushButton *Button_7;
    QPushButton *Button_cos;
    QPushButton *Button_2;
    QPushButton *Button_div;
    QPushButton *Button_8;
    QPushButton *Button_sqrt_e;
    QPushButton *Button_ac;
    QPushButton *Button_pow_ln;
    QLineEdit *lineEdit_text;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(450, 400);
        Widget->setMinimumSize(QSize(350, 300));
        Widget->setMaximumSize(QSize(1400, 1200));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 431, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button_ans_pai = new QPushButton(layoutWidget);
        Button_ans_pai->setObjectName(QString::fromUtf8("Button_ans_pai"));
        Button_ans_pai->setMinimumSize(QSize(50, 50));
        Button_ans_pai->setMaximumSize(QSize(200, 200));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(15);
        Button_ans_pai->setFont(font);

        gridLayout->addWidget(Button_ans_pai, 5, 4, 1, 1);

        Button_del = new QPushButton(layoutWidget);
        Button_del->setObjectName(QString::fromUtf8("Button_del"));
        Button_del->setMinimumSize(QSize(50, 50));
        Button_del->setMaximumSize(QSize(200, 200));
        Button_del->setFont(font);

        gridLayout->addWidget(Button_del, 2, 6, 1, 1);

        Button_add = new QPushButton(layoutWidget);
        Button_add->setObjectName(QString::fromUtf8("Button_add"));
        Button_add->setMinimumSize(QSize(50, 50));
        Button_add->setMaximumSize(QSize(200, 200));
        Button_add->setFont(font);

        gridLayout->addWidget(Button_add, 2, 5, 1, 1);

        Button_tan = new QPushButton(layoutWidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        Button_tan->setMinimumSize(QSize(50, 50));
        Button_tan->setMaximumSize(QSize(200, 200));
        Button_tan->setFont(font);

        gridLayout->addWidget(Button_tan, 5, 1, 1, 1);

        Button_4 = new QPushButton(layoutWidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setMinimumSize(QSize(50, 50));
        Button_4->setMaximumSize(QSize(200, 200));
        Button_4->setFont(font);

        gridLayout->addWidget(Button_4, 3, 2, 1, 1);

        Button_0 = new QPushButton(layoutWidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setMinimumSize(QSize(50, 50));
        Button_0->setMaximumSize(QSize(200, 200));
        Button_0->setFont(font);

        gridLayout->addWidget(Button_0, 5, 2, 1, 1);

        lineEdit_answer = new QLineEdit(layoutWidget);
        lineEdit_answer->setObjectName(QString::fromUtf8("lineEdit_answer"));
        lineEdit_answer->setMinimumSize(QSize(350, 50));
        lineEdit_answer->setMaximumSize(QSize(1400, 200));

        gridLayout->addWidget(lineEdit_answer, 1, 0, 1, 7);

        Button_shift = new QPushButton(layoutWidget);
        Button_shift->setObjectName(QString::fromUtf8("Button_shift"));
        Button_shift->setMinimumSize(QSize(50, 50));
        Button_shift->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        Button_shift->setFont(font1);

        gridLayout->addWidget(Button_shift, 5, 0, 1, 1);

        Button_6 = new QPushButton(layoutWidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setMinimumSize(QSize(50, 50));
        Button_6->setMaximumSize(QSize(200, 200));
        Button_6->setFont(font);

        gridLayout->addWidget(Button_6, 3, 4, 1, 1);

        Button_point_ = new QPushButton(layoutWidget);
        Button_point_->setObjectName(QString::fromUtf8("Button_point_"));
        Button_point_->setMinimumSize(QSize(50, 50));
        Button_point_->setMaximumSize(QSize(200, 200));
        Button_point_->setFont(font);

        gridLayout->addWidget(Button_point_, 5, 3, 1, 1);

        Button_sub = new QPushButton(layoutWidget);
        Button_sub->setObjectName(QString::fromUtf8("Button_sub"));
        Button_sub->setMinimumSize(QSize(50, 50));
        Button_sub->setMaximumSize(QSize(200, 200));
        Button_sub->setFont(font);

        gridLayout->addWidget(Button_sub, 3, 5, 1, 1);

        Button_right = new QPushButton(layoutWidget);
        Button_right->setObjectName(QString::fromUtf8("Button_right"));
        Button_right->setMinimumSize(QSize(50, 50));
        Button_right->setMaximumSize(QSize(200, 200));
        Button_right->setFont(font);

        gridLayout->addWidget(Button_right, 2, 1, 1, 1);

        Button_1 = new QPushButton(layoutWidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setMinimumSize(QSize(50, 50));
        Button_1->setMaximumSize(QSize(200, 200));
        Button_1->setFont(font);

        gridLayout->addWidget(Button_1, 4, 2, 1, 1);

        Button_sin = new QPushButton(layoutWidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        Button_sin->setMinimumSize(QSize(50, 50));
        Button_sin->setMaximumSize(QSize(200, 200));
        Button_sin->setFont(font);

        gridLayout->addWidget(Button_sin, 3, 1, 1, 1);

        Button_mul = new QPushButton(layoutWidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setMinimumSize(QSize(50, 50));
        Button_mul->setMaximumSize(QSize(200, 200));
        Button_mul->setFont(font);

        gridLayout->addWidget(Button_mul, 4, 5, 1, 1);

        Button_9 = new QPushButton(layoutWidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setMinimumSize(QSize(50, 50));
        Button_9->setMaximumSize(QSize(200, 200));
        Button_9->setFont(font);

        gridLayout->addWidget(Button_9, 2, 4, 1, 1);

        Button_5 = new QPushButton(layoutWidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setMinimumSize(QSize(50, 50));
        Button_5->setMaximumSize(QSize(200, 200));
        Button_5->setFont(font);

        gridLayout->addWidget(Button_5, 3, 3, 1, 1);

        Button_enter = new QPushButton(layoutWidget);
        Button_enter->setObjectName(QString::fromUtf8("Button_enter"));
        Button_enter->setMinimumSize(QSize(50, 100));
        Button_enter->setMaximumSize(QSize(200, 400));
        Button_enter->setFont(font);

        gridLayout->addWidget(Button_enter, 4, 6, 2, 1);

        Button_left = new QPushButton(layoutWidget);
        Button_left->setObjectName(QString::fromUtf8("Button_left"));
        Button_left->setMinimumSize(QSize(50, 50));
        Button_left->setMaximumSize(QSize(200, 200));
        Button_left->setFont(font);

        gridLayout->addWidget(Button_left, 2, 0, 1, 1);

        Button_3 = new QPushButton(layoutWidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setMinimumSize(QSize(50, 50));
        Button_3->setMaximumSize(QSize(200, 200));
        Button_3->setFont(font);

        gridLayout->addWidget(Button_3, 4, 4, 1, 1);

        Button_7 = new QPushButton(layoutWidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setMinimumSize(QSize(50, 50));
        Button_7->setMaximumSize(QSize(200, 200));
        Button_7->setFont(font);

        gridLayout->addWidget(Button_7, 2, 2, 1, 1);

        Button_cos = new QPushButton(layoutWidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        Button_cos->setMinimumSize(QSize(50, 50));
        Button_cos->setMaximumSize(QSize(200, 200));
        Button_cos->setFont(font);

        gridLayout->addWidget(Button_cos, 4, 1, 1, 1);

        Button_2 = new QPushButton(layoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setMinimumSize(QSize(50, 50));
        Button_2->setMaximumSize(QSize(200, 200));
        Button_2->setFont(font);

        gridLayout->addWidget(Button_2, 4, 3, 1, 1);

        Button_div = new QPushButton(layoutWidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        Button_div->setMinimumSize(QSize(50, 50));
        Button_div->setMaximumSize(QSize(200, 200));
        Button_div->setFont(font);

        gridLayout->addWidget(Button_div, 5, 5, 1, 1);

        Button_8 = new QPushButton(layoutWidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setMinimumSize(QSize(50, 50));
        Button_8->setMaximumSize(QSize(200, 200));
        Button_8->setFont(font);

        gridLayout->addWidget(Button_8, 2, 3, 1, 1);

        Button_sqrt_e = new QPushButton(layoutWidget);
        Button_sqrt_e->setObjectName(QString::fromUtf8("Button_sqrt_e"));
        Button_sqrt_e->setMinimumSize(QSize(50, 50));
        Button_sqrt_e->setMaximumSize(QSize(200, 200));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(13);
        Button_sqrt_e->setFont(font2);

        gridLayout->addWidget(Button_sqrt_e, 4, 0, 1, 1);

        Button_ac = new QPushButton(layoutWidget);
        Button_ac->setObjectName(QString::fromUtf8("Button_ac"));
        Button_ac->setMinimumSize(QSize(50, 50));
        Button_ac->setMaximumSize(QSize(200, 200));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(16);
        Button_ac->setFont(font3);

        gridLayout->addWidget(Button_ac, 3, 6, 1, 1);

        Button_pow_ln = new QPushButton(layoutWidget);
        Button_pow_ln->setObjectName(QString::fromUtf8("Button_pow_ln"));
        Button_pow_ln->setMinimumSize(QSize(50, 50));
        Button_pow_ln->setMaximumSize(QSize(200, 200));
        Button_pow_ln->setFont(font);

        gridLayout->addWidget(Button_pow_ln, 3, 0, 1, 1);

        lineEdit_text = new QLineEdit(layoutWidget);
        lineEdit_text->setObjectName(QString::fromUtf8("lineEdit_text"));
        lineEdit_text->setMinimumSize(QSize(350, 50));
        lineEdit_text->setMaximumSize(QSize(1400, 200));

        gridLayout->addWidget(lineEdit_text, 0, 0, 1, 7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Button_ans_pai->setText(QCoreApplication::translate("Widget", "Ans", nullptr));
        Button_del->setText(QCoreApplication::translate("Widget", "DEL", nullptr));
        Button_add->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Button_tan->setText(QCoreApplication::translate("Widget", "tan", nullptr));
        Button_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Button_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Button_shift->setText(QCoreApplication::translate("Widget", "shift", nullptr));
        Button_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Button_point_->setText(QCoreApplication::translate("Widget", ".", nullptr));
        Button_sub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Button_right->setText(QCoreApplication::translate("Widget", ")", nullptr));
        Button_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Button_sin->setText(QCoreApplication::translate("Widget", "sin", nullptr));
        Button_mul->setText(QCoreApplication::translate("Widget", "*", nullptr));
        Button_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Button_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Button_enter->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Button_left->setText(QCoreApplication::translate("Widget", "(", nullptr));
        Button_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Button_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Button_cos->setText(QCoreApplication::translate("Widget", "cos", nullptr));
        Button_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Button_div->setText(QCoreApplication::translate("Widget", "/", nullptr));
        Button_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Button_sqrt_e->setText(QCoreApplication::translate("Widget", "sqrt", nullptr));
        Button_ac->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        Button_pow_ln->setText(QCoreApplication::translate("Widget", "^", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
