TEMPLATE = app

CONFIG += QT

QT += \
    core\

MODULE_NAME = configTest

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc

LIBS += -lgtest -lconfig

include (../build.pri)


SOURCES = \
        configTest.cpp\
        $$BASE_DIR/test/test.cpp

HEADERS = \

