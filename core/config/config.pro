TEMPLATE = lib

CONFIG += QT

QT += \
    core\
    gui

MODULE_NAME = config 

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc

include (../build.pri)

SOURCES = \
        config.cpp


HEADERS = \


