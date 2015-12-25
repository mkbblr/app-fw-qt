TEMPLATE = app

CONFIG += QT

QT += \
    core\
    gui

MODULE_NAME = main

include (../build.pri)


INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc

SOURCES = \
        main.cpp


HEADERS = \


