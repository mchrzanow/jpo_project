#ifndef CAR_H
#define CAR_H
#include <iostream>
#include<QMainWindow>


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
    void set_id(int);
    void update_status();

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
