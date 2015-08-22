#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = litepad
TEMPLATE = app
CONFIG += warn_on

# -------------------------------------------------
# Auto select compiler
# -------------------------------------------------
win32-g++:      COMPILER = mingw
win32-msvc*:    COMPILER = msvc
linux-g++:      COMPILER = gcc

INCLUDEPATH += . ../dialogs ../lib
DEPENDPATH += ../lib .

LIBS += -L../lib -lqtfindreplacedialog

QTFINDREPLACE_LIB = ../lib/libqtfindreplacedialog.*
contains(COMPILER, msvc) {
    QTFINDREPLACE_LIB = ../lib/qtfindreplacedialog.lib
}
TARGETDEPS += $$QTFINDREPLACE_LIB

SOURCES += main.cpp\
        mainwindow.cpp \
        aboutdiag.cpp

HEADERS  += mainwindow.h \
    aboutdiag.h

FORMS    += mainwindow.ui \
    aboutdiag.ui

target.path = /share/examples/qtfindreplacedialog

example.files = $$HEADERS $$SOURCES $$FORMS
example.path = /share/examples/qtfindreplacedialog

INSTALLS += target \
    example

RESOURCES += \
    resources.qrc
