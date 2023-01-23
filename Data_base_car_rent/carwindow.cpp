#include "carwindow.h"
#include "ui_carwindow.h"
#include <QFile>

carwindow::carwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carwindow)
{
    ui->setupUi(this);
    cars_db.readFromJson(cars_db.cars_list);
    update_table(ui->tableView);
    cars_db.cars_list.clear();
}

carwindow::~carwindow()
{
    delete ui;
}

void carwindow::update_table(QTableView* tableView)
{
    QFile loadFile("C:/Users/micha/OneDrive/Pulpit/wynik_jpo/example.json");
    if (!loadFile.open(QIODevice::ReadOnly)) {
        qWarning("Couldn't open save file.");
        return;
    }
    QByteArray jsonData = loadFile.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

    QJsonArray jsonArray = jsonDoc.array();

    QStandardItemModel* model = new QStandardItemModel();
    // set column names
        QStringList headers;
        headers << "id" << "category" << "avability" << "make" << "model" << "number_of_seats" << "price" << "year_of_manufacture";
        model->setHorizontalHeaderLabels(headers);

    // fill the model with data
        for(int i = 0; i < jsonArray.size(); i++) {
          QJsonObject jsonObject = jsonArray[i].toObject();
          QList<QStandardItem*> items;
          items.append(new QStandardItem(QString::number(jsonObject["id"].toInt())));
          items.append(new QStandardItem(jsonObject["category"].toString()));
          items.append(new QStandardItem(jsonObject["avability"].toString()));
          items.append(new QStandardItem(jsonObject["make"].toString()));
          items.append(new QStandardItem(jsonObject["model"].toString()));
          items.append(new QStandardItem(QString::number(jsonObject["number_of_seats"].toInt())));
          items.append(new QStandardItem(QString::number(jsonObject["price"].toInt())));
          items.append(new QStandardItem(QString::number(jsonObject["year_of_manufacture"].toInt())));
          model->appendRow(items);
        }
        tableView->setModel(model);
    loadFile.close();
}

void carwindow::print_search(QTableView* tableView,std::vector<Car*> &car_list)
{
       QStandardItemModel* model = new QStandardItemModel();
    // set column names
        QStringList headers;
        headers << "id" << "category" << "avability" << "make" << "model" << "number_of_seats" << "price" << "year_of_manufacture";
        model->setHorizontalHeaderLabels(headers);

    // fill the model with data
        for(int i = 0; i < (int)car_list.size(); i++) {
          QList<QStandardItem*> items;
          items.append(new QStandardItem(car_list[i]->get_id()));
          items.append(new QStandardItem(car_list[i]->get_category()));
          items.append(new QStandardItem(car_list[i]->get_avability()));
          items.append(new QStandardItem(car_list[i]->get_make()));
          items.append(new QStandardItem(car_list[i]->get_model()));
          items.append(new QStandardItem(QString::number(car_list[i]->get_number_of_seats())));
          items.append(new QStandardItem(QString::number(car_list[i]->get_price())));
          items.append(new QStandardItem(QString::number(car_list[i]->get_year_of_manufacture())));
          model->appendRow(items);
        }
        tableView->setModel(model);
}
void carwindow::on_submit_clicked()
{
    cars_db.readFromJson(cars_db.cars_list);
    cars_db.add_car(cars_db.cars_list, make_=ui->make->text(),model_=ui->model->text(),year_ =ui->year_of_production->text().toInt(), category_= ui->category->text(),
                    seats_= ui->number_of_seats->text().toInt(), price_=ui->price->text().toInt(), avability_ = ui->avability->text());

    cars_db.writeToJson(cars_db.cars_list);
    update_table(ui->tableView);
    cars_db.cars_list.clear();
}


void carwindow::on_search_clicked()
{
    cars_db.readFromJson(cars_db.cars_list);
    std::vector<Car*> founded_cars = cars_db.search_car(cars_db.cars_list, make_=ui->make->text(),model_=ui->model->text(),year_ =ui->year_of_production->text().toInt(), category_= ui->category->text(),
                       seats_= ui->number_of_seats->text().toInt(), price_=ui->price->text().toInt(), avability_ = ui->avability->text());
    print_search(ui->tableView,founded_cars);
    cars_db.cars_list.clear();
    founded_cars.clear();

}


void carwindow::on_clearsearch_clicked()
{
    cars_db.readFromJson(cars_db.cars_list);
    update_table(ui->tableView);
    cars_db.cars_list.clear();
}

