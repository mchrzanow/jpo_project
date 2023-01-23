#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "carwindow.h"
#include "rentwindow.h"
#include "clientwindow.h"
#include "cars_database.h"

/*
plik nagłówkowy dla okna mainwindow
wersja 1.0
*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_car_clicked();          //obsługa sygnału od przycisku car

    void on_rental_clicked();       //obsługa sygnału od przycisku rental

    void on_clients_clicked();      //obsługa sygnału od przycisku clients

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
