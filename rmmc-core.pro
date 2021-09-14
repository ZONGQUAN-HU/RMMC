QT -= gui
#CONFIG -= qt
CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp


TRANSLATIONS += \
    rmmc-core_en_US.ts \
    rmmc-core_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations
CONFIG += console

DISTFILES +=

HEADERS += \
    color.h \
    yuansu.h
