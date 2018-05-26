#-------------------------------------------------
#
# Project created by QtCreator 2018-05-23T16:43:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kameiros
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    qcityview2d.cpp \
    housemodel.cpp \
    housecontroller.cpp \
    abstractmodel.cpp \
    abstractcontroller.cpp \
    abstractview.cpp \
    houseview.cpp \
    changefigurecontrollerdecorator.cpp \
    movefigurecontrollerdecorator.cpp \
    icontroller.cpp \
    idecorator.cpp

HEADERS += \
        mainwindow.h \
    qcityview2d.h \
    housemodel.h \
    housecontroller.h \
    abstractmodel.h \
    abstractcontroller.h \
    abstractview.h \
    houseview.h \
    changefigurecontrollerdecorator.h \
    icontroller.h \
    movefigurecontrollerdecorator.h \
    idecorator.h

FORMS += \
        mainwindow.ui

DISTFILES += \
    model.qmodel

CONFIG += c++14
