#include "clientwindow.h"
#include "ui_clientwindow.h"

/*
faza realzacji
*/

clientwindow::clientwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::clientwindow)
{
    ui->setupUi(this);
}

clientwindow::~clientwindow()
{
    delete ui;
}
