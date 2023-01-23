#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <QMainWindow>

/*
plik nagłówkowy dla klasy Client
zrealizowana - nie wykorzystywana na aktualnym etapie projektu
*/

struct address_of_resident
{
    QString street;
    QString city;
    QString post_code;
    int house_number;
    int flat_number;
};

struct driving_licence
{
    QString number;
    QString validity_date;
};

class Client
{
public:
    Client(QString& name, QString& last_name, int age, address_of_resident& address, driving_licence& licence, int id);
    ~Client();
    QString get_name(void);
    QString get_last_name(void);
    int get_age(void);
    int get_id(void);
    address_of_resident get_address(void);
    driving_licence get_licence(void);


private:
    QString name;
    QString last_name;
    int age;
    address_of_resident address;
    driving_licence licence;
    int id;


};
#endif // CLIENT_H
