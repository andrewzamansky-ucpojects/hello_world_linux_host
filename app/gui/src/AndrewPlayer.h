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

#ifndef __JUCE_HEADER_B05BE1D021B1B44C__
#define __JUCE_HEADER_B05BE1D021B1B44C__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioComponent.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class AndrewPlayer  : public Component,
                      public ChangeListener,
                      public SliderListener,
                      public ButtonListener
{
public:
    //==============================================================================
    AndrewPlayer ();
    ~AndrewPlayer();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    enum TransportState
	{
		Stopped,
		Starting,
		Playing,
		Stopping
	};
    TransportState state;

    void changeState(AndrewPlayer::TransportState newState);
    void changeListenerCallback(ChangeBroadcaster* source) override;

	AudioComponent* AudioComponentObj;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> slider;
    ScopedPointer<Label> label;
    ScopedPointer<TextButton> openButton;
    ScopedPointer<TextButton> playButton;
    ScopedPointer<TextButton> stopButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AndrewPlayer)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_B05BE1D021B1B44C__
