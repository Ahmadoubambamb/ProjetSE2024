#-------------------------------------------------
#
# Project created by QtCreator 2024-12-12T00:01:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NotreProjet_SE_2024
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    processus.cpp \
    fifo.cpp \
    file_attente.cpp

HEADERS  += mainwindow.h \
    tourniquet.h \
    processus.h \
    fifo.h \
    file_attente.h

FORMS    += mainwindow.ui
