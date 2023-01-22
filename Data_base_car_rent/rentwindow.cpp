#include "rentwindow.h"
#include "ui_rentwindow.h"

rentwindow::rentwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rentwindow)
{
    ui->setupUi(this);
}

rentwindow::~rentwindow()
{
    delete ui;
}
