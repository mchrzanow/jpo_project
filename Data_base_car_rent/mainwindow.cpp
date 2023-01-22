#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_car_clicked()
{
    carwindow* car_w = new carwindow();
    car_w -> show();

}


void MainWindow::on_rental_clicked()
{
    rentwindow* rent_w = new rentwindow();
    rent_w -> show();
}


void MainWindow::on_clients_clicked()
{
    clientwindow* cli_w = new clientwindow();
    cli_w->show();
}

