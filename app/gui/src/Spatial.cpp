/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Spatial.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Spatial::Spatial ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText (TRANS("Voice"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::RotaryVerticalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Center")));
    label->setFont (Font (15.00f, Font::bold));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::RotaryVerticalDrag);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Sides")));
    label2->setFont (Font (15.00f, Font::bold));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textButton2 = new TextButton ("new button"));
    textButton2->setButtonText (TRANS("3D"));
    textButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::RotaryVerticalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Intencity")));
    label3->setFont (Font (15.00f, Font::bold));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (780, 650);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Spatial::~Spatial()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textButton = nullptr;
    slider = nullptr;
    label = nullptr;
    slider2 = nullptr;
    label2 = nullptr;
    textButton2 = nullptr;
    slider3 = nullptr;
    label3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Spatial::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 0.0f, 770.0f, 425.0f, 10.000f);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 444.0f, 770.0f, 172.0f, 10.000f);

    g.setColour (Colours::black);
    g.fillRect (436, 444, 8, 172);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Spatial::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    textButton->setBounds (16, 464, 112, 32);
    slider->setBounds (144, 488, 88, 88);
    label->setBounds (160, 576, 55, 24);
    slider2->setBounds (267, 486, 88, 88);
    label2->setBounds (283, 574, 55, 24);
    textButton2->setBounds (490, 464, 112, 32);
    slider3->setBounds (618, 488, 88, 88);
    label3->setBounds (624, 576, 78, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Spatial::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
        //[/UserButtonCode_textButton2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void Spatial::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Spatial" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="780" initialHeight="650">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="0 0 770 425" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <ROUNDRECT pos="0 444 770 172" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <RECT pos="436 444 8 172" fill="solid: ff000000" hasStroke="0"/>
  </BACKGROUND>
  <TEXTBUTTON name="new button" id="3333dd7371775626" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="16 464 112 32" buttonText="Voice"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="new slider" id="384e403cc379563" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="144 488 88 88" min="0" max="10" int="0"
          style="RotaryVerticalDrag" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="9eaf1725ca7a3ca2" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="160 576 55 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Center" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <SLIDER name="new slider" id="3e909642c79b8a04" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="267 486 88 88" min="0"
          max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="fc14d91c51e084c9" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="283 574 55 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Sides" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="dc0453e38d14068c" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="490 464 112 32" buttonText="3D"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="new slider" id="58a1950b9be8eb56" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="618 488 88 88" min="0"
          max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="7d551296f7e0e200" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="624 576 78 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Intencity" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
