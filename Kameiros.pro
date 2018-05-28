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
        src/main.cpp \
        src/mainwindow.cpp \
    src/qcityview2d.cpp \
    src/model/housemodel.cpp \
    src/model/abstractmodel.cpp \
    src/view/iview.cpp \
    src/view/abstractview.cpp \
    src/view/houseview.cpp \
    src/view/decorator/movefigureviewdecorator.cpp \
    src/controller/abstractcontroller.cpp \
    src/controller/housecontroller.cpp \
    src/controller/decorator/changefigurecontrollerdecorator.cpp \
    src/controller/decorator/movefigurecontrollerdecorator.cpp \
    src/controller/icontroller.cpp \
    src/controller/decorator/idecorator.cpp \
    src/movefiguredecoratorfactory.cpp \
    src/view/decorator/editfigureviewdecorator.cpp \
    src/editfiguredecoratorfactory.cpp \
    src/controller/decorator/editfigurecontrollerdecorator.cpp \
    src/view/handlechangepointfigure.cpp


HEADERS += \
        src/mainwindow.h \
    src/qcityview2d.h \
	src/model/abstractmodel.h \
    src/model/housemodel.h \
    src/view/iview.h \
    src/view/abstractview.h \
    src/view/houseview.h \
    src/view/decorator/movefigureviewdecorator.h \
	src/view/handlechangepointfigure.h \
	src/controller/abstractcontroller.h \
	src/controller/housecontroller.h \
    src/controller/decorator/changefigurecontrollerdecorator.h \
    src/controller/icontroller.h \
    src/controller/decorator/movefigurecontrollerdecorator.h \
    src/controller/decorator/idecorator.h \
    src/abstractdecoratorfactory.h \
    src/movefiguredecoratorfactory.h \
    src/view/decorator/editfigureviewdecorator.h \
    src/editfiguredecoratorfactory.h \
    src/controller/decorator/editfigurecontrollerdecorator.h \
    


FORMS += \
        mainwindow.ui

DISTFILES += \
    model.qmodel

CONFIG += c++14
