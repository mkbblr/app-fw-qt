TEMPLATE = app

CONFIG += QT

QT += \
    core\
    gui

MODULE_NAME = mainTest

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc
LIBS += -lgtest
include (../build.pri)


SOURCES = \
        mainTest.cpp\
        $$BASE_DIR/test/test.cpp\



HEADERS = \


