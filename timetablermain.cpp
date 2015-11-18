#include "timetablermain.h"
#include "ui_timetablermain.h"

TimeTablerMain::TimeTablerMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TimeTablerMain)
{
    ui->setupUi(this);
}

TimeTablerMain::~TimeTablerMain()
{
    delete ui;
}
