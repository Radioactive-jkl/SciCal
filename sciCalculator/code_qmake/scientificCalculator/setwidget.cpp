#include "setwidget.h"
#include "ui_setwidget.h"

setwidget::setwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setwidget)
{
    ui->setupUi(this);

    this->setWindowTitle("set");

    this->setWindowFlags(Qt::WindowStaysOnTopHint);

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

void setwidget::on_spinBox_valueChanged(int arg)
{
    conf_2 = arg;
}


void setwidget::on_commitButton_clicked()
{
    conf = conf_1 + conf_2 + conf_3 + conf_4;
    emit sendToWidget(conf);
    this->close();
}


void setwidget::on_checkBox_per_stateChanged(int arg)
{
    switch (arg)
    {
    case Qt::Checked:
        conf_3 = 100;
        break;
    case Qt::Unchecked:
        conf_3 = 0;
    }
}

void setwidget::on_checkBox_top_stateChanged(int arg)
{
    switch (arg)
    {
    case Qt::Checked:
        conf_4 = 1000;
        break;
    case Qt::Unchecked:
        conf_4 = 0;
    }
}


void setwidget::set_text(QString str)
{
    ui->textEdit->setText(str);
}

void setwidget::on_exportButton_clicked()
{
    QFileDialog dlg(this);

    //get path
    QString fileName = dlg.getSaveFileName(this, tr("Save As"), "./", tr("Text File(*.txt)"));
    if( fileName == "" )
    {
        return;
    }

    //Save path
    QFile file(fileName);

    //Open as text
    if( file.open(QIODevice::WriteOnly | QIODevice::Text) )
    {
        QTextStream out(&file); //Int I/O

        out << ui->textEdit->toPlainText() << endl; //Output

        QMessageBox::warning(this, tr("Finish"), tr("Successfully save the file!"));

        file.close();
    }
    else
    {
        QMessageBox::warning(this, tr("Error"), tr("File to open file!"));
    }
}
