
SOURCES += \
    $$PWD/imgui/imgui_draw.cpp \
    $$PWD/imgui/imgui_widgets.cpp \
    $$PWD/imgui/imgui_tables.cpp \
    $$PWD/imgui/imgui.cpp \
    $$PWD/imgui/imgui_demo.cpp \
    $$PWD/ImGuiRenderer.cpp \
    $$PWD/QtImGui.cpp

INCLUDEPATH += $$PWD/imgui $$PWD

HEADERS += \
    $$PWD/ImGuiRenderer.h \
    $$PWD/QtImGui.h \
    $$PWD/QtKeyMappings.h \
    #$$PWD/imgui/imgui.h \
    #$$PWD/imgui/imconfig.h \
    #$$PWD/imgui/imgui_internal.h

DEFINES += QT_WIDGETS_LIB=true
