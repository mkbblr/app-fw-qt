TEMPLATE = app

CONFIG += QT

QT += \
    core\

MODULE_NAME = config_test

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc

LIBS += -lgtest -lconfig

include (../build.pri)

SOURCES = \
        test.cpp


HEADERS = \


