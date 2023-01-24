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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setwidget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *roundButon;
    QRadioButton *cutButton;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QPushButton *commitButton;

    void setupUi(QWidget *setwidget)
    {
        if (setwidget->objectName().isEmpty())
            setwidget->setObjectName(QString::fromUtf8("setwidget"));
        setwidget->resize(240, 121);
        layoutWidget = new QWidget(setwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 221, 101));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        roundButon = new QRadioButton(layoutWidget);
        roundButon->setObjectName(QString::fromUtf8("roundButon"));

        gridLayout->addWidget(roundButon, 0, 0, 1, 1);

        cutButton = new QRadioButton(layoutWidget);
        cutButton->setObjectName(QString::fromUtf8("cutButton"));

        gridLayout->addWidget(cutButton, 0, 1, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        commitButton = new QPushButton(layoutWidget);
        commitButton->setObjectName(QString::fromUtf8("commitButton"));

        gridLayout->addWidget(commitButton, 2, 1, 1, 1);


        retranslateUi(setwidget);

        QMetaObject::connectSlotsByName(setwidget);
    } // setupUi

    void retranslateUi(QWidget *setwidget)
    {
        setwidget->setWindowTitle(QCoreApplication::translate("setwidget", "Form", nullptr));
        roundButon->setText(QCoreApplication::translate("setwidget", "rounding-off", nullptr));
        cutButton->setText(QCoreApplication::translate("setwidget", "cutting-off", nullptr));
        checkBox->setText(QCoreApplication::translate("setwidget", "  Use %", nullptr));
        commitButton->setText(QCoreApplication::translate("setwidget", "commit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setwidget: public Ui_setwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETWIDGET_H
