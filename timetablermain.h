#ifndef TIMETABLERMAIN_H
#define TIMETABLERMAIN_H

#include <QMainWindow>

namespace Ui {
class TimeTablerMain;
}

class TimeTablerMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimeTablerMain(QWidget *parent = 0);
    ~TimeTablerMain();

private:
    Ui::TimeTablerMain *ui;
};

#endif // TIMETABLERMAIN_H
