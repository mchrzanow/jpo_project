#ifndef CAR_H
#define CAR_H
#include <iostream>
#include<QMainWindow>

/*
plik nagłówkowy klasy Car
wersja 1.0
*/

class Car
{
public:
    Car(QString& make, QString& model, int year_of_manufacture, QString& category,int number_of_seats,int price,QString& avability, int id  );
    ~Car();
    QString get_make(void);
    QString get_model(void);
    int get_year_of_manufacture(void);
    QString get_category(void);
    int get_number_of_seats(void);
    int get_price();
    QString get_avability();
    int get_id(void);
    void update_status();       //aktualnie funkcja nie jest wykorzystywana

private:
    QString make;
    QString model;
    int year_of_manufacture;
    QString category;
    int number_of_seats;
    int price;
    QString avability;
    int id;
};

#endif // CAR_H
