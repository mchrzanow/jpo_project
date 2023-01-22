#include "cars_database.h"

cars_database::cars_database()
{

}

void cars_database::add_car(std::vector<Car*> & cars_list, QString make, QString model,
                            int year_of_manufacture, QString category, int number_of_seats, int price, QString avability)
{
    cars_list.insert(cars_list.begin(), new Car(make,model,year_of_manufacture,category,number_of_seats,price,avability,time(NULL)));
}

void cars_database::del_car(std::vector<Car* > &cars_list,int id)
{
    for(auto i = 0; i < (int)cars_list.size(); i++)
    {
        if(cars_list[i]->get_id() == id)
        {
            cars_list.erase(cars_list.begin()+i);
        }
    }
}

void cars_database::search_car(std::vector<Car *> &cars_list, QString make, QString model,
                               int year_of_manufacture, QString category, int number_of_seats, int price, QString avability)
{
   Car* search_car = new Car(make,model,year_of_manufacture,category,number_of_seats,price,avability,0);
   std::vector<Car*> found_cars;
   for(auto i = 0; i < (int)cars_list.size(); i++)
   {
   bool match = true;
   if (!search_car->get_make().isEmpty() && search_car->get_make() != cars_list[i]->get_make())
        match = false;
   if (!search_car->get_model().isEmpty() && search_car->get_model() != cars_list[i]->get_model())
        match = false;
   if (search_car->get_year_of_manufacture() != 0 && search_car->get_year_of_manufacture() != cars_list[i]->get_year_of_manufacture())
        match = false;
   if (!search_car->get_category().isEmpty() && search_car->get_category() != cars_list[i]->get_category())
        match = false;
   if (search_car->get_number_of_seats() != 0 && search_car->get_number_of_seats() != cars_list[i]->get_number_of_seats())
        match = false;
   if (search_car->get_price() != 0 && search_car->get_price() != cars_list[i]->get_price())
        match = false;
   if (!search_car->get_avability().isEmpty() && search_car->get_avability() != cars_list[i]->get_avability())
        match = false;
   if (match)
        found_cars.push_back(cars_list[i]);
   }
   cars_list.clear();
   cars_list=found_cars;
   found_cars.clear();

 }


void cars_database::writeToJson(std::vector<Car*>& cars_list)
{
    QJsonArray carsJsonArray;
    for (auto car : cars_list)
    {
        QJsonObject carJson;
        carJson["make"] = car->get_make();
        carJson["model"] = car->get_model();
        carJson["year_of_manufacture"] = car->get_year_of_manufacture();
        carJson["category"] = car->get_category();
        carJson["number_of_seats"] = car->get_number_of_seats();
        carJson["price"] = car->get_price();
        carJson["avability"] = car->get_avability();
        carJson["id"] = car->get_id();
        carsJsonArray.append(carJson);
    }
    QJsonDocument doc;

    QFile saveFile("C:/Users/micha/OneDrive/Pulpit/wynik_jpo/example.json");
      if (!saveFile.open(QIODevice::WriteOnly)) {
          qWarning("Couldn't open save file.");
          return;
      }
      QTextStream stream(&saveFile);
      stream << QString(QJsonDocument(carsJsonArray).toJson(QJsonDocument::Indented));
      saveFile.close();
  }

void cars_database::readFromJson(std::vector<Car*>& cars_list)
{
    QFile loadFile("C:/Users/micha/OneDrive/Pulpit/wynik_jpo/example.json");
    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open save file.");
        return;
    }
    QByteArray jsonData = loadFile.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

    QJsonArray jsonArray = jsonDoc.array();
    for (int i = 0; i < jsonArray.size(); ++i) {
        QJsonObject jsonObject = jsonArray[i].toObject();
        QString make = jsonObject["make"].toString();
        QString model = jsonObject["model"].toString();
        int year_of_manufacture = jsonObject["year_of_manufacture"].toInt();
        QString category = jsonObject["category"].toString();
        int number_of_seats = jsonObject["number_of_seats"].toInt();
        int price = jsonObject["price"].toInt();
        QString avability = jsonObject["avability"].toString();
        int id = jsonObject["id"].toInt();
        cars_list.push_back(new Car(make, model, year_of_manufacture, category, number_of_seats, price, avability, id));
    }

   loadFile.close();
}
