#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T23:52:14
#
#-------------------------------------------------

TARGET = brVar
TEMPLATE = lib

DEFINES += BRVAR_LIBRARY

SOURCES += brVar.cpp

HEADERS += brVar.h\
        brvar_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
