#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T19:51:21
#
#-------------------------------------------------

TARGET = brSystem
TEMPLATE = lib

DEFINES += BRSYSTEM_LIBRARY

SOURCES += brSystem.cpp

HEADERS += brSystem.h\
        brsystem_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
