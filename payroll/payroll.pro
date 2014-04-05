#-------------------------------------------------
#
# Project created by QtCreator 2014-04-05T13:58:00
#
#-------------------------------------------------

QT       += core gui
DESTDIR = ../build
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = freepayroll
win32:TARGET = FreePayroll
TEMPLATE = app


SOURCES += main.cpp\
        payrollmainwindow.cpp

HEADERS  += payrollmainwindow.h

FORMS    += payrollmainwindow.ui
