#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T14:13:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QuixoBang
TEMPLATE = app


SOURCES += main.cpp\
        mon_plateau.cpp \
    piece.cpp

HEADERS  += mon_plateau.h \
    piece.h

FORMS    += mon_plateau.ui

RESOURCES += \
    images.qrc
