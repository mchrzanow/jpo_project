#include "Client.h"

Client::Client(QString& name, QString& last_name, int age, address_of_resident& address, driving_licence& licence, int id)
{
    this->name=name;
    this->last_name=last_name;
    this->age=age;
    this->address=address;
    this->licence=licence;
    this->id=id;
}

QString Client::get_name()
{
    return this->name;
}

QString Client::get_last_name(void)
{
    return this->last_name;
}

int Client::get_age(void)
{
    return this->age;
}

address_of_resident Client::get_address(void)
{
    return this->address;
}

driving_licence Client::get_licence(void)
{
    return this->licence;
}

int Client::get_id(void)
{
    return this->id;
}

Client::~Client()
{
    delete this;
}
