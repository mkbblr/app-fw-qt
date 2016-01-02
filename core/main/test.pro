TEMPLATE = app

CONFIG += QT

QT += \
    core\
    gui

MODULE_NAME = main_test

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc
LIBS += -lgtest
include (../build.pri)

SOURCES = \
        test.cpp


HEADERS = \


