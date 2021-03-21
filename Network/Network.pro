TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
LIBS += -L"/SFML-2.5.1/lib/"

        CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
        CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

        INCLUDEPATH += "/SFML-2.5.1/include"
        DEPENDPATH += "/SFML-2.5.1/include"


