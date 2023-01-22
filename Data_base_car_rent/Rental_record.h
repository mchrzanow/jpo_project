#ifndef RENTAL_RECORD_H
#define RENTAL_RECORD_H
#include <iostream>
#include <QMainWindow>

class Rental_record
{
public:
    Rental_record(int rent_id,QString& start_date, QString& end_date,int km_limit, int price, QString& fullname,int cli_id, QString& model, int car_id);
    ~Rental_record();
    int get_rent_id();
    int get_km_limit();
    int get_price();
    QString get_start_date();
    QString get_end_date();
    QString get_fullname();
    QString get_model();
    int get_cli_id();
    int get_car_id();

private:
    int rent_id;
    int km_limit;
    int price;
    QString start_date;
    QString end_date;
    QString fullname;
    QString model;
    int car_id;
    int cli_id;
};

#endif // RENTAL_RECORD_H
