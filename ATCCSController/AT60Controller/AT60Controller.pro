#-------------------------------------------------
#
# Project created by QtCreator 2017-07-01T16:53:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AT60Controller
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    ATCCSDevicePanel.cpp \
    ATCCSMainTitle.cpp \
    ATCCSMainWindow.cpp \
    atccsplanpanel.cpp \
    atccspopuptitle.cpp \
    atccssettingwindow.cpp \
    atccsdbsettingpanel.cpp \
    atccsaddresssettingpanel.cpp \
    atccsaboutpanel.cpp \
    qwtimeline.cpp \
    qwtimelinewidget.cpp

HEADERS += \
        widget.h \
    ATCCSDevicePanel.h \
    ATCCSMainTitle.h \
    ATCCSMainWindow.h \
    atccsplanpanel.h \
    atccspopuptitle.h \
    atccssettingwindow.h \
    atccsdbsettingpanel.h \
    atccsaddresssettingpanel.h \
    atccsaboutpanel.h \
    qwtimeline.h \
    qwtimelinewidget.h

RESOURCES += \
    ../resource/resource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QWUIKit/release/ -lQWUIKit
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QWUIKit/debug/ -lQWUIKit
else:unix: LIBS += -L$$OUT_PWD/../QWUIKit/ -lQWUIKit

INCLUDEPATH += $$PWD/../QWUIKit
DEPENDPATH += $$PWD/../QWUIKit

DISTFILES +=
