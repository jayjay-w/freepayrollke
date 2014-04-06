#-------------------------------------------------
#
# Project created by QtCreator 2014-04-06T21:25:58
#
#-------------------------------------------------

QT       += xml

QT       -= gui

DESTDIR = ../build
TARGET = libfreepayroll
TEMPLATE = lib

DEFINES += LIBFREEPAYROLL_LIBRARY

SOURCES += payrollxmlmanager.cpp

HEADERS += payrollxmlmanager.h\
        libfreepayroll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
