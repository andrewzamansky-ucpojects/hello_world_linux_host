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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "AndrewPlayer.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
AudioComponent* createAudioComponent();
ControlBaseComponent *pControl_PC_App_Component_Obj;
//[/MiscUserDefs]

//==============================================================================
AndrewPlayer::AndrewPlayer ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 0.25, 0);
    slider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("VB Level")));
    label->setFont (Font (15.00f, Font::bold));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (openButton = new TextButton ("new button"));
    openButton->setButtonText (TRANS("Open..."));
    openButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    openButton->addListener (this);

    addAndMakeVisible (playButton = new TextButton ("new button"));
    playButton->setButtonText (TRANS("Play"));
    playButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton->addListener (this);

    addAndMakeVisible (stopButton = new TextButton ("new button"));
    stopButton->setButtonText (TRANS("Stop"));
    stopButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton->addListener (this);
    stopButton->setColour (TextButton::buttonColourId, Colours::red);
    stopButton->setColour (TextButton::buttonOnColourId, Colours::aqua);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (156, 276);


    //[Constructor] You can add your own custom stuff here..
    AndrewPlayer::AudioComponentObj = createAudioComponent();
	pControl_PC_App_Component_Obj = AndrewPlayer::AudioComponentObj;
    pControl_PC_App_Component_Obj->addChangeListener(this);
    //[/Constructor]
}

AndrewPlayer::~AndrewPlayer()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    label = nullptr;
    openButton = nullptr;
    playButton = nullptr;
    stopButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
	delete AudioComponentObj;
    //[/Destructor]
}

//==============================================================================
void AndrewPlayer::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 0.0f, 156.0f, 276.0f, 10.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AndrewPlayer::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    slider->setBounds (40, 120, 80, 104);
    label->setBounds (8, 96, 144, 24);
    openButton->setBounds (24, 16, 112, 32);
    playButton->setBounds (24, 56, 112, 32);
    stopButton->setBounds (32, 232, 96, 32);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void AndrewPlayer::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void AndrewPlayer::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == openButton)
    {
        //[UserButtonCode_openButton] -- add your button handler code here..
		FileChooser chooser("Select a Wave file to play...",
			File::nonexistent,
			"*.wav");                                        // [7]

		if (chooser.browseForFileToOpen())                                    // [8]
		{
			String file_name;
			String cmd("play_file ");
			const char *row_cmd;
			File file(chooser.getResult());
			file_name = file.getFullPathName();
			file_name = file_name.replace("\\", "\\\\");
			cmd += file_name; //append
			row_cmd = cmd.toRawUTF8();
			pControl_PC_App_Component_Obj->sendCommand(row_cmd);

		}
        //[/UserButtonCode_openButton]
    }
    else if (buttonThatWasClicked == playButton)
    {
        //[UserButtonCode_playButton] -- add your button handler code here..
		changeState(Starting);
        //[/UserButtonCode_playButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
		changeState(Stopping);
        //[/UserButtonCode_stopButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AndrewPlayer::changeListenerCallback(ChangeBroadcaster* source)
	{
		if (source == AndrewPlayer::AudioComponentObj)
		{
			String event_msg;
			pControl_PC_App_Component_Obj->getEvent(event_msg);
			if (0 == event_msg.compare("file loaded"))
			{
				playButton->setEnabled(true);
			}
			else if (0 == event_msg.compare("file is playing"))
			{
				changeState(Playing);
			}
			else if (0 == event_msg.compare("file is stopped"))
			{
				changeState(Stopped);
			}
		}
	}

void AndrewPlayer::changeState(AndrewPlayer::TransportState newState)
	{
		if (state != newState)
		{
			state = newState;

			switch (state)
			{
			case Stopped:                           // [3]
				stopButton->setEnabled(false);
				playButton->setEnabled(true);
				break;

			case Starting:                          // [4]
				playButton->setEnabled(false);
				pControl_PC_App_Component_Obj->sendCommand("start_play");

				break;

			case Playing:                           // [5]
				stopButton->setEnabled(true);
				break;

			case Stopping:                          // [6]
				pControl_PC_App_Component_Obj->sendCommand("stop_play");
				break;
			}
		}
	}



//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AndrewPlayer" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="156" initialHeight="276">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="0 0 156 276" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="a9b40294aeea3e44" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="40 120 80 104" min="0" max="0.25"
          int="0" style="RotaryHorizontalVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="177e1cac9d775e4b" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="8 96 144 24" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="VB Level" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="36"/>
  <TEXTBUTTON name="new button" id="1126031132076347" memberName="openButton"
              virtualName="" explicitFocusOrder="0" pos="24 16 112 32" buttonText="Open..."
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ae30aa6d0926f40b" memberName="playButton"
              virtualName="" explicitFocusOrder="0" pos="24 56 112 32" buttonText="Play"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="47fc3b7f6cf9c566" memberName="stopButton"
              virtualName="" explicitFocusOrder="0" pos="32 232 96 32" bgColOff="ffff0000"
              bgColOn="ff00ffff" buttonText="Stop" connectedEdges="15" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
