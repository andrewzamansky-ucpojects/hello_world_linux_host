/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_1A7C0314FA0C68BA__
#define __JUCE_HEADER_1A7C0314FA0C68BA__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Style.h"
#include "MyUtils.h"
#include "Dynamics.h"
#include "Equalizer.h"
#include "Spatial.h"
#include "AndrewPlayer.h"
#include "DebugWindow.h"

//[/Headers]

#include "AndrewPlayer.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainWindow  : public Component,
                    public ButtonListener
{
public:
    //==============================================================================
    MainWindow ();
    ~MainWindow();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void selectPartials (int i);
    void setDebugWindow(DebugWindow *adebugWindow);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	ScopedPointer<Dynamics> dynamic_view;
	ScopedPointer<Equalizer> equalizer_view;
	ScopedPointer<Spatial> spatial_view;
	ScopedPointer<AndrewPlayer> player_view;
	DebugWindow *debugWindow;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label;
    ScopedPointer<ToggleButton> toggleButton1;
    ScopedPointer<Label> label2;
    ScopedPointer<ToggleButton> toggleButton2;
    ScopedPointer<Label> label3;
    ScopedPointer<ToggleButton> toggleButton3;
    ScopedPointer<Viewport> viewport;
    ScopedPointer<Label> label4;
    ScopedPointer<AndrewPlayer> component;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1A7C0314FA0C68BA__
