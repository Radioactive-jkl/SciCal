/********************************************************************************
** Form generated from reading UI file 'setwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETWIDGET_H
#define UI_SETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setwidget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QRadioButton *roundButon;
    QLabel *label;
    QCheckBox *checkBox_top;
    QSpinBox *spinBox;
    QCheckBox *checkBox_per;
    QRadioButton *cutButton;
    QPushButton *commitButton;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *exportButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *setwidget)
    {
        if (setwidget->objectName().isEmpty())
            setwidget->setObjectName(QString::fromUtf8("setwidget"));
        setwidget->resize(413, 247);
        widget = new QWidget(setwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 394, 229));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        roundButon = new QRadioButton(widget);
        roundButon->setObjectName(QString::fromUtf8("roundButon"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        roundButon->setFont(font);

        gridLayout->addWidget(roundButon, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkBox_top = new QCheckBox(widget);
        checkBox_top->setObjectName(QString::fromUtf8("checkBox_top"));
        checkBox_top->setFont(font);

        gridLayout->addWidget(checkBox_top, 7, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font);

        gridLayout->addWidget(spinBox, 5, 0, 1, 1);

        checkBox_per = new QCheckBox(widget);
        checkBox_per->setObjectName(QString::fromUtf8("checkBox_per"));
        checkBox_per->setFont(font);

        gridLayout->addWidget(checkBox_per, 4, 0, 1, 1);

        cutButton = new QRadioButton(widget);
        cutButton->setObjectName(QString::fromUtf8("cutButton"));
        cutButton->setFont(font);

        gridLayout->addWidget(cutButton, 2, 0, 1, 1);

        commitButton = new QPushButton(widget);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));
        commitButton->setFont(font);

        gridLayout->addWidget(commitButton, 8, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        exportButton = new QPushButton(widget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setFont(font);

        horizontalLayout->addWidget(exportButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFont(font);

        verticalLayout->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(setwidget);

        QMetaObject::connectSlotsByName(setwidget);
    } // setupUi

    void retranslateUi(QWidget *setwidget)
    {
        setwidget->setWindowTitle(QCoreApplication::translate("setwidget", "Form", nullptr));
        roundButon->setText(QCoreApplication::translate("setwidget", " rounding-off", nullptr));
        label->setText(QCoreApplication::translate("setwidget", "OutputSettings", nullptr));
        checkBox_top->setText(QCoreApplication::translate("setwidget", " TopHint", nullptr));
        checkBox_per->setText(QCoreApplication::translate("setwidget", " Use %", nullptr));
        cutButton->setText(QCoreApplication::translate("setwidget", " cutting-off", nullptr));
        commitButton->setText(QCoreApplication::translate("setwidget", "commit", nullptr));
        label_3->setText(QCoreApplication::translate("setwidget", "Other Settings", nullptr));
        label_2->setText(QCoreApplication::translate("setwidget", "History", nullptr));
        exportButton->setText(QCoreApplication::translate("setwidget", "Save as ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setwidget: public Ui_setwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWIDGET_H
