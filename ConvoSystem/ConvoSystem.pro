# Add more folders to ship with the application, here
folder_01.source = qml/ConvoSystem
folder_01.target = qml
uiElements.source = UI_Elements
DEPLOYMENTFOLDERS += folder_01 \
    uiElements

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    textfield.cpp \
    convonode.cpp \
    npcfield.cpp \
    playerfield.cpp \
    convoscript.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    textfield.h \
    convonode.h \
    npcfield.h \
    playerfield.h \
    convoscript.h
