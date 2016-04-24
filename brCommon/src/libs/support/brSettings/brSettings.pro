#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T19:49:01
#
#-------------------------------------------------

TARGET = brSettings
TEMPLATE = lib

DEFINES += BRSETTINGS_LIBRARY

SOURCES += brSettings.cpp

HEADERS += brSettings.h\
        brsettings_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
