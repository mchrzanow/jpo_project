QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Client.cpp \
    Rental_record.cpp \
    car.cpp \
    car_database.cpp \
    carwindow.cpp \
    cli_database.cpp \
    clientwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    rent_database.cpp \
    rentwindow.cpp

HEADERS += \
    Client.h \
    Rental_record.h \
    car.h \
    cars_database.h \
    carwindow.h \
    cli_database.h \
    clientwindow.h \
    mainwindow.h \
    rent_database.h \
    rents_database.h \
    rentwindow.h

FORMS += \
    carwindow.ui \
    clientwindow.ui \
    mainwindow.ui \
    rentwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
