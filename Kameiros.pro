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
    model/housemodel.cpp \
    model/abstractmodel.cpp \
    view/iview.cpp \
    view/abstractview.cpp \
    view/houseview.cpp \
    view/decorator/movefigureviewdecorator.cpp \
    controller/abstractcontroller.cpp \
    controller/housecontroller.cpp \
    controller/decorator/changefigurecontrollerdecorator.cpp \
    controller/decorator/movefigurecontrollerdecorator.cpp \
    controller/icontroller.cpp \
    controller/decorator/idecorator.cpp \
    movefiguredecoratorfactory.cpp \
    view/decorator/editfigureviewdecorator.cpp \
    editfiguredecoratorfactory.cpp \
    controller/decorator/editfigurecontrollerdecorator.cpp \
    view/handlechangepointfigure.cpp


HEADERS += \
        mainwindow.h \
    qcityview2d.h \
    model/housemodel.h \
    controller/housecontroller.h \
    model/abstractmodel.h \
    controller/abstractcontroller.h \
    view/iview.h \
    view/abstractview.h \
    view/houseview.h \
    view/decorator/movefigureviewdecorator.h \
    controller/decorator/changefigurecontrollerdecorator.h \
    controller/icontroller.h \
    controller/decorator/movefigurecontrollerdecorator.h \
    controller/decorator/idecorator.h \
    abstractdecoratorfactory.h \
    movefiguredecoratorfactory.h \
    view/decorator/editfigureviewdecorator.h \
    editfiguredecoratorfactory.h \
    controller/decorator/editfigurecontrollerdecorator.h \
    view/handlechangepointfigure.h


FORMS += \
        mainwindow.ui

DISTFILES += \
    model.qmodel

CONFIG += c++14
