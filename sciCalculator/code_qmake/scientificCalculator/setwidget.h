#ifndef SETWIDGET_H
#define SETWIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>


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
        conf_3 = 0,
        conf_4 = 0;

    explicit setwidget(QWidget *parent = nullptr);
    ~setwidget();

    void set_text(QString str);

private slots:
    void on_roundButon_clicked();

    void on_cutButton_clicked();

    void on_spinBox_valueChanged(int arg);

    void on_commitButton_clicked();

    void on_checkBox_per_stateChanged(int arg);

    void on_checkBox_top_stateChanged(int arg);

    void on_exportButton_clicked();

private:
    Ui::setwidget *ui;

signals:
    void sendToWidget(int co);
};

#endif // SETWIDGET_H
