#-------------------------------------------------
#
# Project created by QtCreator 2014-03-02T17:35:55
#
#-------------------------------------------------

QT       -= gui

TARGET = eirVar
TEMPLATE = lib

DEFINES += EIRVAR_LIBRARY

win32:RC_FILE = eirVar.rc

include(../libs.pri)
LIBS *= -leirBase -leirType -leirKID

SOURCES += eirVar.cpp \
    Variable.cpp \
    VariableMap.cpp \
    VariableSet.cpp

HEADERS += eirVar.h\
        eirVar_global.h \
    version.h \
    Variable.h \
    VariableMap.h \
    VariableSet.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE455E3E9
    TARGET.CAPABILITY =
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = eirVar.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

OTHER_FILES += \
    eirVar.rc


