#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T19:51:09
#
#-------------------------------------------------

TARGET = brLog
TEMPLATE = lib

DEFINES += BRLOG_LIBRARY

include (../common.pri)

win32:RC_FILE = WinRes.rc

LIBS *= -lbrBase
LIBS *= -lbrType
LIBS *= -lbrStone

SOURCES += brLog.cpp \
    LogFrontEnd.cpp \
    LogCore.cpp \
    LogWriter.cpp \
    LogFilter.cpp \
    LogFormatter.cpp \
    LogItem.cpp

HEADERS += brLog.h\
        brlog_global.h \
    LibraryVersion.h \
    LogFrontEnd.h \
    LogCore.h \
    LogWriter.h \
    LogFilter.h \
    LogFormatter.h \
    LogItem.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    WinRes.rc
