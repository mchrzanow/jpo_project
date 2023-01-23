/********************************************************************************
** Form generated from reading UI file 'carwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARWINDOW_H
#define UI_CARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carwindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *number_of_seats;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *avability;
    QLineEdit *model;
    QLineEdit *year_of_production;
    QLineEdit *price;
    QLineEdit *category;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *make;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *submit;
    QPushButton *search;
    QPushButton *clearsearch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *carwindow)
    {
        if (carwindow->objectName().isEmpty())
            carwindow->setObjectName("carwindow");
        carwindow->resize(800, 600);
        centralwidget = new QWidget(carwindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 260, 731, 291));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 50, 531, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        number_of_seats = new QLineEdit(layoutWidget);
        number_of_seats->setObjectName("number_of_seats");

        gridLayout->addWidget(number_of_seats, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        avability = new QLineEdit(layoutWidget);
        avability->setObjectName("avability");

        gridLayout->addWidget(avability, 3, 2, 1, 1);

        model = new QLineEdit(layoutWidget);
        model->setObjectName("model");

        gridLayout->addWidget(model, 1, 1, 1, 1);

        year_of_production = new QLineEdit(layoutWidget);
        year_of_production->setObjectName("year_of_production");

        gridLayout->addWidget(year_of_production, 1, 3, 1, 1);

        price = new QLineEdit(layoutWidget);
        price->setObjectName("price");

        gridLayout->addWidget(price, 3, 0, 1, 1);

        category = new QLineEdit(layoutWidget);
        category->setObjectName("category");

        gridLayout->addWidget(category, 1, 2, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        make = new QLineEdit(layoutWidget);
        make->setObjectName("make");

        gridLayout->addWidget(make, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(640, 60, 95, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        submit = new QPushButton(layoutWidget1);
        submit->setObjectName("submit");

        verticalLayout->addWidget(submit);

        search = new QPushButton(layoutWidget1);
        search->setObjectName("search");

        verticalLayout->addWidget(search);

        clearsearch = new QPushButton(layoutWidget1);
        clearsearch->setObjectName("clearsearch");

        verticalLayout->addWidget(clearsearch);

        carwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(carwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        carwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(carwindow);
        statusbar->setObjectName("statusbar");
        carwindow->setStatusBar(statusbar);

        retranslateUi(carwindow);

        QMetaObject::connectSlotsByName(carwindow);
    } // setupUi

    void retranslateUi(QMainWindow *carwindow)
    {
        carwindow->setWindowTitle(QCoreApplication::translate("carwindow", "carwindow", nullptr));
        label_4->setText(QCoreApplication::translate("carwindow", "year of production", nullptr));
        label_6->setText(QCoreApplication::translate("carwindow", "category", nullptr));
        label_7->setText(QCoreApplication::translate("carwindow", "avability", nullptr));
        label->setText(QCoreApplication::translate("carwindow", "make", nullptr));
        label_2->setText(QCoreApplication::translate("carwindow", "model", nullptr));
        label_3->setText(QCoreApplication::translate("carwindow", "number of seats", nullptr));
        label_5->setText(QCoreApplication::translate("carwindow", "price/per day", nullptr));
        submit->setText(QCoreApplication::translate("carwindow", "submit", nullptr));
        search->setText(QCoreApplication::translate("carwindow", "search", nullptr));
        clearsearch->setText(QCoreApplication::translate("carwindow", "clear search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carwindow: public Ui_carwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARWINDOW_H
