#include "Rental_record.h"

Rental_record::Rental_record(int rent_id,QString& start_date, QString& end_date,int km_limit, int price, QString& fullname,int cli_id, QString& model, int car_id)
{
    this->rent_id=rent_id;
    this->start_date=start_date;
    this->end_date=end_date;
    this->km_limit=km_limit;
    this->price=price;
    this->model=model;
    this->fullname=fullname;
    this->car_id=car_id;
    this->cli_id=cli_id;
}

int Rental_record::get_rent_id()
{
    return this->rent_id;
}

QString Rental_record::get_start_date()
{
    return this->start_date;
}

QString Rental_record::get_end_date()
{
    return this->end_date;
}

int Rental_record::get_km_limit()
{
    return this->km_limit;
}

int Rental_record::get_price()
{
    return this->price;
}

int Rental_record::get_car_id()
{
    return this->car_id;
}

int Rental_record::get_cli_id()
{
    return this->cli_id;
}

QString Rental_record::get_fullname()
{
    return this->fullname;
}

QString Rental_record::get_model()
{
    return this->model;
}

Rental_record::~Rental_record()
{
    delete this;
}
