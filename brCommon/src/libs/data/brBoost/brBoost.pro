#-------------------------------------------------
#
# Project created by QtCreator 2016-02-16T23:53:13
#
#-------------------------------------------------

TARGET = brBoost
TEMPLATE = lib

DEFINES += BRBOOST_LIBRARY

include (../common.pri)

win32:RC_FILE = WinRes.rc

LIBS *= -lbrBase
#LIBS *= -leirData

SOURCES += brBoost.cpp \
    Log/Core.cpp

HEADERS += brBoost.h\
        brboost_global.h \
    LibraryVersion.h \
    Log/Core.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    WinRes.rc
