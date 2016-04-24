#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T19:50:09
#
#-------------------------------------------------

QT       += xml

TARGET = brResult
TEMPLATE = lib

DEFINES += BRRESULT_LIBRARY

SOURCES += brResult.cpp

HEADERS += brResult.h\
        brresult_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
