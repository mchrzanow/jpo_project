#ifndef CARWINDOW_H
#define CARWINDOW_H

#include <QMainWindow>
#include "cars_database.h"
#include <QTableView>

/*
plik nagłówkowy okna carwindow
wersja 1.0
*/
namespace Ui {
class carwindow;
}

class carwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit carwindow(QWidget *parent = nullptr);
    ~carwindow();
    cars_database cars_db;
    std::vector<Car*> car_list;
    QString make_;
    QString model_;
    QString category_;
    QString avability_;
    int price_;
    int seats_;
    int year_;
    void update_table(QTableView* tableview);       //funkcja uaktualniająca widok w tableList w oknie po dodaniu rekordu
    void print_search(QTableView* tableview, std::vector<Car*> &car_list); //funkcja uaktualniająca widok w tableList po wykonaniu wyszukiwania

private slots:
    void on_submit_clicked();       //obsługa sygnału przycisku submit

    void on_search_clicked();       //obsługa sygnału przycisku search

    void on_clearsearch_clicked();  //obsługa sygnału przycisku clear search

private:
    Ui::carwindow *ui;
};

#endif // CARWINDOW_H
