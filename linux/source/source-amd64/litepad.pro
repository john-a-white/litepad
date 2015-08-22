#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Litepad
TEMPLATE = app
CONFIG += warn_on

# -------------------------------------------------
# Auto select compiler
# -------------------------------------------------
win32-g++:      COMPILER = mingw
win32-msvc*:    COMPILER = msvc
linux-g++:      COMPILER = gcc

DESTDIR = ../bin
MOC_DIR = ../build/moc
RCC_DIR = ../build/rcc
UI_DIR = ../build/ui
INCLUDEPATH += . ../dialogs ../lib
DEPENDPATH += ../lib .

LIBS += -L../lib -lqtfindreplacedialog

QTFINDREPLACE_LIB = ../lib/libqtfindreplacedialog.*
contains(COMPILER, msvc) {
    QTFINDREPLACE_LIB = ../lib/qtfindreplacedialog.lib
}
POST_TARGETDEPS += $$QTFINDREPLACE_LIB

SOURCES += main.cpp\
        mainwindow.cpp \
        aboutdiag.cpp \
        findreplacedialog.cpp \
        findform.cpp \
        finddialog.cpp

HEADERS  += mainwindow.h \
    aboutdiag.h \
    finddialog.h \
    findform.h \
    findreplacedialog.h \
    findreplaceform.h \
    findreplace_global.h

FORMS    += mainwindow.ui \
    aboutdiag.ui \
    findreplacedialog.ui \
    findreplaceform.ui

target.path = /share/examples/qtfindreplacedialog

example.files = $$HEADERS $$SOURCES $$FORMS
example.path = /share/examples/qtfindreplacedialog

INSTALLS += target \
    example

RESOURCES += \
    resources/resources.qrc
