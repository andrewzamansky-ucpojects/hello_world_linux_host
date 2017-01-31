INCLUDE_THIS_COMPONENT := y


#DEFINES =

#CFLAGS =

#ASMFLAGS =






SRC = AndrewPlayer.cpp
SRC += DebugWindow.cpp
SRC += Dynamics.cpp
SRC += Equalizer.cpp
SRC += GuiMain.cpp
SRC += MainWindow.cpp
SRC += MyImages.cpp
SRC += MyUtils.cpp
SRC += Spatial.cpp

#SPEED_CRITICAL_FILES =

VPATH = src


include $(COMMON_CC)
