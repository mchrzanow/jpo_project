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


void MainWindow::on_car_clicked()                          //obsługa syganłu od przycisku car, otwieranie karty carwindow
{
    carwindow* car_w = new carwindow();
    car_w -> show();

}


void MainWindow::on_rental_clicked()                       //obsługa syganłu od przycisku rental, otwieranie karty rentwindow
{
    rentwindow* rent_w = new rentwindow();
    rent_w -> show();
}


void MainWindow::on_clients_clicked()                      //obsługa syganłu od przycisku clients, otwieranie karty clients
{
    clientwindow* cli_w = new clientwindow();
    cli_w->show();
}

