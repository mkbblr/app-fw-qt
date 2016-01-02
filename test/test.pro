TEMPLATE = app

CONFIG += QT

QT += \
    core\

MODULE_NAME = allTest

INCLUDEPATH += $$_PRO_FILE_PWD_
INCLUDEPATH += $$_PRO_FILE_PWD_/inc

LIBS += -lgtest -lconfig

include (../build.pri)
#include (../test.pri)

SOURCES += \
        $$BASE_DIR/test/test.cpp\
        $$BASE_DIR/core/config/configTest.cpp\
        $$BASE_DIR/core/main/mainTest.cpp

HEADERS += \

