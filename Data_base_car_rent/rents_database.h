#ifndef RENTS_DATABASE_H
#define RENTS_DATABASE_H

#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <vector>
#include "Rental_record.h"

/*
plik nagłówkowy klasy rents_database
w fazie realizacji do dalszego rozwoju
*/

class rents_database
{
public:
    void add();
    void del();
    void view();
private:
    std::vector<Rental_record> rents_list;
    int counter = 0;
};
#endif // RENTS_DATABASE_H
