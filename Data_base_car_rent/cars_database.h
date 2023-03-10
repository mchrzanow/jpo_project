#ifndef CARS_DATABASE_H
#define CARS_DATABASE_H

#include<iostream>
#include<QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <vector>
#include "car.h"
#include <ctime>
#include <QStandardItemModel>
#include <QTableView>

/*
 * plik nagłówkowy klasy cars_database
 * wersja 1.0
*/
class cars_database
{
public:
    cars_database();
    void add_car(std::vector<Car*>& cars_list,QString make, QString model, int year_of_manufacture,
                 QString category,int number_of_seats,int price,QString avability);
    void del_car(std::vector<Car*>& cars_list,int id);
    std::vector<Car*> search_car(std::vector<Car*> & cars_list, QString make, QString model,int year_of_manufacture,
                    QString category, int number_of_seats, int price, QString avability);
    void writeToJson(std::vector<Car*>& cars_list);
    void readFromJson(std::vector<Car*>& cars_list);
    std::vector<Car*> cars_list;
};

#endif // CARS_DATABASE_H
