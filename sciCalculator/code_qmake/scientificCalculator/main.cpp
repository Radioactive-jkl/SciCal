#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //To compatible with high resolution screen.
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);

    Widget w;
    w.show();

    return a.exec();
}
