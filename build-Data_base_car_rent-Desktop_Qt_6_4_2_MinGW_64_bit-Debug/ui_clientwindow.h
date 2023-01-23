/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *clientwindow)
    {
        if (clientwindow->objectName().isEmpty())
            clientwindow->setObjectName("clientwindow");
        clientwindow->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        clientwindow->setFont(font);
        centralwidget = new QWidget(clientwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 100, 681, 321));
        label->setFont(font);
        clientwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 42));
        clientwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(clientwindow);
        statusbar->setObjectName("statusbar");
        clientwindow->setStatusBar(statusbar);

        retranslateUi(clientwindow);

        QMetaObject::connectSlotsByName(clientwindow);
    } // setupUi

    void retranslateUi(QMainWindow *clientwindow)
    {
        clientwindow->setWindowTitle(QCoreApplication::translate("clientwindow", "clientwindow", nullptr));
        label->setText(QCoreApplication::translate("clientwindow", "Ups...... Karta niedost\304\231pna, strona znajduje si\304\231 w realizacji", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientwindow: public Ui_clientwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
