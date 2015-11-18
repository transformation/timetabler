#include "timetablermain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimeTablerMain w;
    w.show();

    return a.exec();
}
