#-------------------------------------------------
#
# Project created by QtCreator 2022-09-08T23:53:38
#
#-------------------------------------------------

QT       += core gui  #当前项目支持的核心图形用户界面扩展库
RC_ICONS += res/login.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExamSys
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
    logindialog.cpp \
    examdialog.cpp

HEADERS += \
    logindialog.h \
    examdialog.h

FORMS += \
    logindialog.ui

RESOURCES += image.qrc
