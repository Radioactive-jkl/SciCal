#ifndef SETWIDGET_H
#define SETWIDGET_H

#include <QWidget>


namespace Ui {
class setwidget;
}

class setwidget : public QWidget
{
    Q_OBJECT

public:

    bool use_per = false;

    int conf = 5,
        conf_1 = 0,
        conf_2 = 5,
        conf_3 = 0;

    explicit setwidget(QWidget *parent = nullptr);
    ~setwidget();

private slots:
    void on_roundButon_clicked();

    void on_cutButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_commitButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::setwidget *ui;

signals:
    void sendToWidget(int co);
};

#endif // SETWIDGET_H
