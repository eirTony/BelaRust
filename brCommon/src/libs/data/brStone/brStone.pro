#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T23:51:55
#
#-------------------------------------------------

QT       += xml

TARGET = brStone
TEMPLATE = lib

DEFINES += BRSTONE_LIBRARY

include (../common.pri)

win32:RC_FILE = WinRes.rc

LIBS *= -lbrBase
LIBS *= -lbrType

SOURCES += brStone.cpp

HEADERS += brStone.h\
        brstone_global.h \
        LibraryVersion.h \

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md \
    WinRes.rc \

