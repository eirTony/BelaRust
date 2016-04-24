#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T00:00:32
#
#-------------------------------------------------

TARGET = brState
TEMPLATE = lib

DEFINES += BRSTATE_LIBRARY

SOURCES += brState.cpp

HEADERS += brState.h\
        brstate_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
