#include "car.h"

Car::Car(QString& make, QString& model, int year_of_manufacture, QString& category,int number_of_seats,int price,QString& avability, int id )
{
    this->make=make;
    this->model=model;
    this->year_of_manufacture=year_of_manufacture;
    this->category=category;
    this->number_of_seats=number_of_seats;
    this->price=price;
    this->avability=avability;
    this->id=id;

}

QString Car::get_make(void)
{
    return this->make;
}

QString Car::get_model(void)
{
    return this->model;
}

int Car::get_year_of_manufacture(void)
{
    return this->year_of_manufacture;
}

QString Car::get_category(void)
{
    return this->category;
}

int Car::get_number_of_seats(void)
{
    return this->number_of_seats;
}

int Car::get_price()
{
    return this->price;
}

QString Car::get_avability()
{
    return this->avability;
}

int Car::get_id(void)
{
    return this->id;
}

void Car::set_id(int new_id)
{
    this->id=new_id;
}

void Car::update_status()
{
    if(this->avability=="available")
    {
         this->avability = "unavailable";
    }
    else if(this->avability == "unavailable")
    {
        this->avability = "available";
    }
}

Car::~Car()
{
    delete this;
}
