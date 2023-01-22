#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "carwindow.h"
#include "rentwindow.h"
#include "clientwindow.h"
#include "cars_database.h"

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
    void on_car_clicked();

    void on_rental_clicked();

    void on_clients_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
