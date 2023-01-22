#ifndef CLI_DATABASE_H
#define CLI_DATABASE_H

#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <vector>
#include "Client.h"

class cli_database
{
public:
    cli_database();
    void add_cli();
    void del_cli();
    void search_cli();
    void show_cli();

private:
    std::vector<Client> cli_list;
    int counter = 0;
};

#endif // CLI_DATABASE_H
