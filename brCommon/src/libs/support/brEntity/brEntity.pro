#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T19:50:38
#
#-------------------------------------------------

TARGET = brEntity
TEMPLATE = lib

DEFINES += BRENTITY_LIBRARY

SOURCES += brEntity.cpp

HEADERS += brEntity.h\
        brentity_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
