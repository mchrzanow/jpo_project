/********************************************************************************
** Form generated from reading UI file 'rentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTWINDOW_H
#define UI_RENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rentwindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rentwindow)
    {
        if (rentwindow->objectName().isEmpty())
            rentwindow->setObjectName("rentwindow");
        rentwindow->resize(800, 600);
        centralwidget = new QWidget(rentwindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 220, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 480, 93, 29));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 100, 113, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 100, 113, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(390, 100, 113, 25));
        rentwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rentwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        rentwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(rentwindow);
        statusbar->setObjectName("statusbar");
        rentwindow->setStatusBar(statusbar);

        retranslateUi(rentwindow);

        QMetaObject::connectSlotsByName(rentwindow);
    } // setupUi

    void retranslateUi(QMainWindow *rentwindow)
    {
        rentwindow->setWindowTitle(QCoreApplication::translate("rentwindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("rentwindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rentwindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rentwindow: public Ui_rentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTWINDOW_H
