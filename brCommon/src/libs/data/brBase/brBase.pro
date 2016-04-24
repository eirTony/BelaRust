#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T23:50:32
#
#-------------------------------------------------

TARGET = brBase
TEMPLATE = lib

DEFINES += BRBASE_LIBRARY

include (../common.pri)

win32:RC_FILE = WinRes.rc

#LIBS *= -leirBase
#LIBS *= -leirData
#LIBS *= -leirType

SOURCES += brBase.cpp \
    ModuleInfo.cpp \
    VersionInfo.cpp \
    _internal/DiagnosticItem.cpp \
    _internal/ModuleManager.cpp

HEADERS += brBase.h\
        brbase_global.h \
    LibraryVersion.h \
    ModuleInfo.h \
    VersionInfo.h \
    _internal/DiagnosticItem.h \
    _internal/ModuleManager.h \
    Diagnostic.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md \
    WinRes.rc
