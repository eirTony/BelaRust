#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T23:51:04
#
#-------------------------------------------------

TARGET = brType
TEMPLATE = lib

DEFINES += BRTYPE_LIBRARY

include (../common.pri)

win32:RC_FILE = WinRes.rc

LIBS *= -lbrBase
#LIBS *= -leirData

SOURCES += brType.cpp \
    QQUrl.cpp

HEADERS += brType.h\
        brtype_global.h \
    CProperty.h \
    Singleton.h \
    LibraryVersion.h \
    QQUrl.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md \
    WinRes.rc
