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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rentwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rentwindow)
    {
        if (rentwindow->objectName().isEmpty())
            rentwindow->setObjectName("rentwindow");
        rentwindow->resize(800, 600);
        centralwidget = new QWidget(rentwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 210, 691, 141));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        label->setFont(font);
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
        label->setText(QCoreApplication::translate("rentwindow", "Ups...... Karta niedost\304\231pna, strona znajduje si\304\231 w realizacji", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rentwindow: public Ui_rentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTWINDOW_H
