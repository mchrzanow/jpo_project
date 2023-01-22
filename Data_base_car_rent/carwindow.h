#ifndef CARWINDOW_H
#define CARWINDOW_H

#include <QMainWindow>
#include "cars_database.h"
#include <QTableView>

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
    void update_table(QTableView* tableview);
    void print_search(QTableView* tableview, std::vector<Car*> &car_list);

private slots:
    void on_submit_clicked();

    void on_search_clicked();

private:
    Ui::carwindow *ui;
};

#endif // CARWINDOW_H
