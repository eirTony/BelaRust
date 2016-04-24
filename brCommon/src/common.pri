# file: ./src/common.pri
#message("In ./src/common.pri")

#SRCDIR = $$(PWD)
#BASEDIR = $$dirname($$SRCDIR)
#EXEDIR = $$BASEDIR/exe
SRCDIR = ../../..
BASEDIR = ../../../..
EXEDIR = ../../../../exe

CONFIG += debug_and_release
CONFIG(debug, debug|release) {
        QMAKE_CXXFLAGS_DEBUG *= -Og
        DESTDIR = $$EXEDIR/dbg32W
        LIBS += -L$$EXEDIR/dbg32W
}
else {
        DESTDIR = $$EXEDIR/bin32W
        LIBS += -L$$EXEDIR/bin32W
}

INCLUDEPATH *= ../../../libs/data
INCLUDEPATH *= ../../../libs/support
INCLUDEPATH *= ../../../libs/proc
INCLUDEPATH *= ../../../libs/task
INCLUDEPATH *= ../../../libs/third
INCLUDEPATH *= ../../..

DEFINES *= QT_USE_QSTRINGBUILDER
QMAKE_CXXFLAGS *= -std=c++11

win32:DEFINES *= PDZ_OS_WIN32
unix:DEFINES *= PDZ_OS_UNIX64

!win32:VERSION = 0.1.0
# How to set from CommonVersion.h?
