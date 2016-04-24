#-------------------------------------------------
#
# Project created by QtCreator 2016-02-08T19:49:40
#
#-------------------------------------------------

TARGET = brExe
TEMPLATE = lib

DEFINES += BREXE_LIBRARY

SOURCES += brExe.cpp

HEADERS += brExe.h\
        brexe_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    README.md
	
