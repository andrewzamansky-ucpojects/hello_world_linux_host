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

#include "Dynamics.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Dynamics::Dynamics ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Cross-Over 1:")));
    label->setFont (Font (15.00f, Font::bold));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor = new TextEditor ("new text editor"));
    textEditor->setMultiLine (false);
    textEditor->setReturnKeyStartsNewLine (false);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (true);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setText (TRANS("100"));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("[Hz]")));
    label2->setFont (Font (15.00f, Font::bold));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Cross-Over 2:")));
    label3->setFont (Font (15.00f, Font::bold));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor2 = new TextEditor ("new text editor"));
    textEditor2->setMultiLine (false);
    textEditor2->setReturnKeyStartsNewLine (false);
    textEditor2->setReadOnly (false);
    textEditor2->setScrollbarsShown (true);
    textEditor2->setCaretVisible (true);
    textEditor2->setPopupMenuEnabled (true);
    textEditor2->setText (TRANS("100"));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("[Hz]")));
    label4->setFont (Font (15.00f, Font::bold));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colours::white);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setTooltip (TRANS("BAND1"));
    textButton->setButtonText (TRANS("BAND 1"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);

    addAndMakeVisible (textButton2 = new TextButton ("new button"));
    textButton2->setTooltip (TRANS("BAND1"));
    textButton2->setButtonText (TRANS("PROCESS"));
    textButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton2->addListener (this);

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 50, 1);
    slider->setSliderStyle (Slider::RotaryVerticalDrag);
    slider->setTextBoxStyle (Slider::TextBoxRight, false, 40, 20);
    slider->addListener (this);

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("Intensity")));
    label5->setFont (Font (15.00f, Font::bold));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colours::white);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("HPF")));
    label6->setFont (Font (15.00f, Font::bold));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (Label::textColourId, Colours::white);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor3 = new TextEditor ("new text editor"));
    textEditor3->setMultiLine (false);
    textEditor3->setReturnKeyStartsNewLine (false);
    textEditor3->setReadOnly (false);
    textEditor3->setScrollbarsShown (true);
    textEditor3->setCaretVisible (true);
    textEditor3->setPopupMenuEnabled (true);
    textEditor3->setText (TRANS("20"));

    addAndMakeVisible (textButton3 = new TextButton ("new button"));
    textButton3->setTooltip (TRANS("BAND1"));
    textButton3->setButtonText (TRANS("BAND 2"));
    textButton3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton3->addListener (this);

    addAndMakeVisible (textButton4 = new TextButton ("new button"));
    textButton4->setTooltip (TRANS("BAND1"));
    textButton4->setButtonText (TRANS("PROCESS"));
    textButton4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton4->addListener (this);

    addAndMakeVisible (label7 = new Label ("new label",
                                           TRANS("Thr")));
    label7->setFont (Font (15.00f, Font::bold));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::textColourId, Colours::white);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor4 = new TextEditor ("new text editor"));
    textEditor4->setMultiLine (false);
    textEditor4->setReturnKeyStartsNewLine (false);
    textEditor4->setReadOnly (false);
    textEditor4->setScrollbarsShown (true);
    textEditor4->setCaretVisible (true);
    textEditor4->setPopupMenuEnabled (true);
    textEditor4->setText (TRANS("0"));

    addAndMakeVisible (label8 = new Label ("new label",
                                           TRANS("Ratio 1")));
    label8->setFont (Font (15.00f, Font::bold));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::textColourId, Colours::white);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor5 = new TextEditor ("new text editor"));
    textEditor5->setMultiLine (false);
    textEditor5->setReturnKeyStartsNewLine (false);
    textEditor5->setReadOnly (false);
    textEditor5->setScrollbarsShown (true);
    textEditor5->setCaretVisible (true);
    textEditor5->setPopupMenuEnabled (true);
    textEditor5->setText (TRANS("1"));

    addAndMakeVisible (label9 = new Label ("new label",
                                           TRANS("Po. Gain")));
    label9->setFont (Font (15.00f, Font::bold));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::textColourId, Colours::white);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor6 = new TextEditor ("new text editor"));
    textEditor6->setMultiLine (false);
    textEditor6->setReturnKeyStartsNewLine (false);
    textEditor6->setReadOnly (false);
    textEditor6->setScrollbarsShown (true);
    textEditor6->setCaretVisible (true);
    textEditor6->setPopupMenuEnabled (true);
    textEditor6->setText (TRANS("0"));

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("Attack")));
    label10->setFont (Font (15.00f, Font::bold));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colours::white);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor7 = new TextEditor ("new text editor"));
    textEditor7->setMultiLine (false);
    textEditor7->setReturnKeyStartsNewLine (false);
    textEditor7->setReadOnly (false);
    textEditor7->setScrollbarsShown (true);
    textEditor7->setCaretVisible (true);
    textEditor7->setPopupMenuEnabled (true);
    textEditor7->setText (TRANS("0.5"));

    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("Release")));
    label11->setFont (Font (15.00f, Font::bold));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (Label::textColourId, Colours::white);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor8 = new TextEditor ("new text editor"));
    textEditor8->setMultiLine (false);
    textEditor8->setReturnKeyStartsNewLine (false);
    textEditor8->setReadOnly (false);
    textEditor8->setScrollbarsShown (true);
    textEditor8->setCaretVisible (true);
    textEditor8->setPopupMenuEnabled (true);
    textEditor8->setText (TRANS("50"));

    addAndMakeVisible (textButton5 = new TextButton ("new button"));
    textButton5->setTooltip (TRANS("BAND1"));
    textButton5->setButtonText (TRANS("BAND 3"));
    textButton5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton5->addListener (this);

    addAndMakeVisible (textButton6 = new TextButton ("new button"));
    textButton6->setTooltip (TRANS("BAND1"));
    textButton6->setButtonText (TRANS("PROCESS"));
    textButton6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton6->addListener (this);

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("Thr")));
    label12->setFont (Font (15.00f, Font::bold));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::textColourId, Colours::white);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor9 = new TextEditor ("new text editor"));
    textEditor9->setMultiLine (false);
    textEditor9->setReturnKeyStartsNewLine (false);
    textEditor9->setReadOnly (false);
    textEditor9->setScrollbarsShown (true);
    textEditor9->setCaretVisible (true);
    textEditor9->setPopupMenuEnabled (true);
    textEditor9->setText (TRANS("0"));

    addAndMakeVisible (label13 = new Label ("new label",
                                            TRANS("Ratio 1")));
    label13->setFont (Font (15.00f, Font::bold));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::textColourId, Colours::white);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor10 = new TextEditor ("new text editor"));
    textEditor10->setMultiLine (false);
    textEditor10->setReturnKeyStartsNewLine (false);
    textEditor10->setReadOnly (false);
    textEditor10->setScrollbarsShown (true);
    textEditor10->setCaretVisible (true);
    textEditor10->setPopupMenuEnabled (true);
    textEditor10->setText (TRANS("1"));

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("Po. Gain")));
    label14->setFont (Font (15.00f, Font::bold));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::textColourId, Colours::white);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor11 = new TextEditor ("new text editor"));
    textEditor11->setMultiLine (false);
    textEditor11->setReturnKeyStartsNewLine (false);
    textEditor11->setReadOnly (false);
    textEditor11->setScrollbarsShown (true);
    textEditor11->setCaretVisible (true);
    textEditor11->setPopupMenuEnabled (true);
    textEditor11->setText (TRANS("0"));

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("Attack")));
    label15->setFont (Font (15.00f, Font::bold));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::textColourId, Colours::white);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor12 = new TextEditor ("new text editor"));
    textEditor12->setMultiLine (false);
    textEditor12->setReturnKeyStartsNewLine (false);
    textEditor12->setReadOnly (false);
    textEditor12->setScrollbarsShown (true);
    textEditor12->setCaretVisible (true);
    textEditor12->setPopupMenuEnabled (true);
    textEditor12->setText (TRANS("0.5"));

    addAndMakeVisible (label16 = new Label ("new label",
                                            TRANS("Release")));
    label16->setFont (Font (15.00f, Font::bold));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (Label::textColourId, Colours::white);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (textEditor13 = new TextEditor ("new text editor"));
    textEditor13->setMultiLine (false);
    textEditor13->setReturnKeyStartsNewLine (false);
    textEditor13->setReadOnly (false);
    textEditor13->setScrollbarsShown (true);
    textEditor13->setCaretVisible (true);
    textEditor13->setPopupMenuEnabled (true);
    textEditor13->setText (TRANS("50"));

    addAndMakeVisible (label17 = new Label ("new label",
                                            TRANS("20")));
    label17->setFont (Font (15.00f, Font::bold));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (Label::textColourId, Colours::white);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label18 = new Label ("new label",
                                            TRANS("200")));
    label18->setFont (Font (15.00f, Font::bold));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::textColourId, Colours::white);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label19 = new Label ("new label",
                                            TRANS("2000")));
    label19->setFont (Font (15.00f, Font::bold));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::textColourId, Colours::white);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label20 = new Label ("new label",
                                            TRANS("20K")));
    label20->setFont (Font (15.00f, Font::bold));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (Label::textColourId, Colours::white);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    cachedImage_dynamics_graph_png_1 = ImageCache::getFromMemory (dynamics_graph_png, dynamics_graph_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (780, 650);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Dynamics::~Dynamics()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    textEditor = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    textEditor2 = nullptr;
    label4 = nullptr;
    textButton = nullptr;
    textButton2 = nullptr;
    slider = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    textEditor3 = nullptr;
    textButton3 = nullptr;
    textButton4 = nullptr;
    label7 = nullptr;
    textEditor4 = nullptr;
    label8 = nullptr;
    textEditor5 = nullptr;
    label9 = nullptr;
    textEditor6 = nullptr;
    label10 = nullptr;
    textEditor7 = nullptr;
    label11 = nullptr;
    textEditor8 = nullptr;
    textButton5 = nullptr;
    textButton6 = nullptr;
    label12 = nullptr;
    textEditor9 = nullptr;
    label13 = nullptr;
    textEditor10 = nullptr;
    label14 = nullptr;
    textEditor11 = nullptr;
    label15 = nullptr;
    textEditor12 = nullptr;
    label16 = nullptr;
    textEditor13 = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    label20 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Dynamics::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 0.0f, 770.0f, 272.0f, 10.000f);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 292.0f, 770.0f, 30.0f, 10.000f);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 340.0f, 240.0f, 280.0f, 10.000f);

    g.setColour (Colours::black);
    g.fillRect (12, 556, 212, 4);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (260.0f, 340.0f, 240.0f, 280.0f, 10.000f);

    g.setColour (Colours::black);
    g.fillRect (276, 388, 212, 4);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (524.0f, 344.0f, 244.0f, 276.0f, 10.000f);

    g.setColour (Colours::black);
    g.fillRect (540, 388, 212, 4);

    g.setColour (Colours::black);
    g.drawImage (cachedImage_dynamics_graph_png_1,
                 12, 12, 740, 228,
                 0, 0, cachedImage_dynamics_graph_png_1.getWidth(), cachedImage_dynamics_graph_png_1.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Dynamics::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label->setBounds (112, 296, 104, 24);
    textEditor->setBounds (224, 296, 64, 24);
    label2->setBounds (288, 296, 40, 24);
    label3->setBounds (390, 295, 104, 24);
    textEditor2->setBounds (502, 295, 64, 24);
    label4->setBounds (566, 295, 40, 24);
    textButton->setBounds (48, 352, 104, 24);
    textButton2->setBounds (8, 392, 104, 24);
    slider->setBounds (96, 432, 136, 88);
    label5->setBounds (16, 464, 80, 24);
    label6->setBounds (80, 576, 40, 24);
    textEditor3->setBounds (128, 576, 37, 24);
    textButton3->setBounds (320, 352, 104, 24);
    textButton4->setBounds (272, 400, 104, 24);
    label7->setBounds (280, 440, 32, 24);
    textEditor4->setBounds (368, 440, 64, 24);
    label8->setBounds (280, 472, 80, 24);
    textEditor5->setBounds (368, 472, 64, 24);
    label9->setBounds (280, 504, 80, 24);
    textEditor6->setBounds (368, 504, 64, 24);
    label10->setBounds (280, 536, 80, 24);
    textEditor7->setBounds (368, 536, 88, 24);
    label11->setBounds (280, 568, 80, 24);
    textEditor8->setBounds (368, 568, 88, 24);
    textButton5->setBounds (595, 355, 104, 24);
    textButton6->setBounds (547, 403, 104, 24);
    label12->setBounds (555, 443, 32, 24);
    textEditor9->setBounds (643, 443, 64, 24);
    label13->setBounds (555, 475, 80, 24);
    textEditor10->setBounds (643, 475, 64, 24);
    label14->setBounds (555, 507, 80, 24);
    textEditor11->setBounds (643, 507, 64, 24);
    label15->setBounds (555, 539, 80, 24);
    textEditor12->setBounds (643, 539, 88, 24);
    label16->setBounds (555, 571, 80, 24);
    textEditor13->setBounds (643, 571, 88, 24);
    label17->setBounds (8, 240, 32, 24);
    label18->setBounds (168, 240, 32, 24);
    label19->setBounds (400, 240, 48, 24);
    label20->setBounds (720, 240, 40, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Dynamics::buttonClicked (Button* buttonThatWasClicked)
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
    else if (buttonThatWasClicked == textButton3)
    {
        //[UserButtonCode_textButton3] -- add your button handler code here..
        //[/UserButtonCode_textButton3]
    }
    else if (buttonThatWasClicked == textButton4)
    {
        //[UserButtonCode_textButton4] -- add your button handler code here..
        //[/UserButtonCode_textButton4]
    }
    else if (buttonThatWasClicked == textButton5)
    {
        //[UserButtonCode_textButton5] -- add your button handler code here..
        //[/UserButtonCode_textButton5]
    }
    else if (buttonThatWasClicked == textButton6)
    {
        //[UserButtonCode_textButton6] -- add your button handler code here..
        //[/UserButtonCode_textButton6]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void Dynamics::sliderValueChanged (Slider* sliderThatWasMoved)
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



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Dynamics" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="780" initialHeight="650">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="0 0 770 272" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <ROUNDRECT pos="0 292 770 30" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <ROUNDRECT pos="0 340 240 280" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <RECT pos="12 556 212 4" fill="solid: ff000000" hasStroke="0"/>
    <ROUNDRECT pos="260 340 240 280" cornerSize="10" fill="solid: ff314a5b"
               hasStroke="0"/>
    <RECT pos="276 388 212 4" fill="solid: ff000000" hasStroke="0"/>
    <ROUNDRECT pos="524 344 244 276" cornerSize="10" fill="solid: ff314a5b"
               hasStroke="0"/>
    <RECT pos="540 388 212 4" fill="solid: ff000000" hasStroke="0"/>
    <IMAGE pos="584 448 100 100" resource="" opacity="1" mode="0"/>
    <IMAGE pos="12 12 740 228" resource="dynamics_graph_png" opacity="1"
           mode="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="18572fc6c01b2c8f" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="112 296 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Cross-Over 1:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="3397870222ea7c33" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="224 296 64 24" initialText="100"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="ed500ccd5b496a67" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="288 296 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="[Hz]" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="44ba63f222fab0cf" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="390 295 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Cross-Over 2:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="7ea306dd927002c" memberName="textEditor2"
              virtualName="" explicitFocusOrder="0" pos="502 295 64 24" initialText="100"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="48f86d7fcd0ee7bb" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="566 295 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="[Hz]" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="5c1c6f3cbf0e9171" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="48 352 104 24" tooltip="BAND1"
              buttonText="BAND 1" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0a7640da6b6b30f" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="8 392 104 24" tooltip="BAND1"
              buttonText="PROCESS" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="new slider" id="7d5968e7eb3aaa7c" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="96 432 136 88" min="0" max="50" int="1"
          style="RotaryVerticalDrag" textBoxPos="TextBoxRight" textBoxEditable="1"
          textBoxWidth="40" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="a9b1f595e9b8be1e" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="16 464 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Intensity" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="a64bcccdf35b11fa" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="80 576 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="HPF" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="918d8ea939542037" memberName="textEditor3"
              virtualName="" explicitFocusOrder="0" pos="128 576 37 24" initialText="20"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="df62feaa43deab25" memberName="textButton3"
              virtualName="" explicitFocusOrder="0" pos="320 352 104 24" tooltip="BAND1"
              buttonText="BAND 2" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="993b2a92469aab2c" memberName="textButton4"
              virtualName="" explicitFocusOrder="0" pos="272 400 104 24" tooltip="BAND1"
              buttonText="PROCESS" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="3522306a9066770a" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="280 440 32 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Thr" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="5b882da488f76e42" memberName="textEditor4"
              virtualName="" explicitFocusOrder="0" pos="368 440 64 24" initialText="0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="89fa43206b9573ca" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="280 472 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Ratio 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="8b1c97ea6cc8e4b" memberName="textEditor5"
              virtualName="" explicitFocusOrder="0" pos="368 472 64 24" initialText="1"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="c730f6e1b779d075" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="280 504 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Po. Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="735df599169fc310" memberName="textEditor6"
              virtualName="" explicitFocusOrder="0" pos="368 504 64 24" initialText="0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="55c7ae806cf392a3" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="280 536 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Attack" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="fcd06ebeb66980b" memberName="textEditor7"
              virtualName="" explicitFocusOrder="0" pos="368 536 88 24" initialText="0.5"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="4d67036c785828e0" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="280 568 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Release" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="d6bf76ca0c7de60b" memberName="textEditor8"
              virtualName="" explicitFocusOrder="0" pos="368 568 88 24" initialText="50"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="5440a7a3b7d13fc0" memberName="textButton5"
              virtualName="" explicitFocusOrder="0" pos="595 355 104 24" tooltip="BAND1"
              buttonText="BAND 3" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="4633dafedbfae7b" memberName="textButton6"
              virtualName="" explicitFocusOrder="0" pos="547 403 104 24" tooltip="BAND1"
              buttonText="PROCESS" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="af34b83810bc4c5d" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="555 443 32 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Thr" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="3fe83aee81763193" memberName="textEditor9"
              virtualName="" explicitFocusOrder="0" pos="643 443 64 24" initialText="0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="5b29b50bdb48bfa2" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="555 475 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Ratio 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="ddf96f0a19fe58c3" memberName="textEditor10"
              virtualName="" explicitFocusOrder="0" pos="643 475 64 24" initialText="1"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="6efe61a13ae32deb" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="555 507 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Po. Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="72cda264b7741bcc" memberName="textEditor11"
              virtualName="" explicitFocusOrder="0" pos="643 507 64 24" initialText="0"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="1cf04cbc39853c4b" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="555 539 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Attack" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="4e45920d216e6146" memberName="textEditor12"
              virtualName="" explicitFocusOrder="0" pos="643 539 88 24" initialText="0.5"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="11191a4969a0ee9d" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="555 571 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Release" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="27b22644d90eccd5" memberName="textEditor13"
              virtualName="" explicitFocusOrder="0" pos="643 571 88 24" initialText="50"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="new label" id="6a3ad24573bb5105" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="8 240 32 24" textCol="ffffffff" edTextCol="ff000000"
         edBkgCol="0" labelText="20" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="5502de952256e17c" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="168 240 32 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="200" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="aa2e523de55b9d24" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="400 240 48 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="2000" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="bff737fa2f785673" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="720 240 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="20K" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: dynamics_graph_png, 6311, "../../../David/AE/dynamics_graph.png"
static const unsigned char resource_Dynamics_dynamics_graph_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,244,0,0,0,134,8,6,0,0,0,43,75,120,244,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,
0,0,0,9,112,72,89,115,0,0,9,153,0,0,9,153,1,234,198,30,32,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,24,36,73,
68,65,84,120,156,237,221,123,92,84,101,254,7,240,207,192,12,195,12,55,69,46,10,66,24,50,153,150,102,178,89,169,185,109,234,175,139,213,214,175,212,108,189,100,165,181,184,96,10,41,166,34,222,240,66,154,
215,212,94,221,144,52,215,236,194,182,181,149,185,182,173,107,101,229,106,166,150,98,14,154,133,162,130,128,220,134,97,255,248,174,235,141,97,102,96,102,206,204,225,243,126,189,120,69,112,206,115,190,
131,103,206,231,156,57,207,121,30,77,191,126,253,142,22,21,21,5,193,67,58,116,232,224,247,228,147,79,234,103,205,154,85,229,170,54,163,162,162,252,82,82,82,244,89,89,89,205,106,115,240,224,193,58,141,
70,163,249,203,95,254,82,235,232,58,122,189,94,147,147,147,99,156,56,113,98,165,189,101,211,211,211,3,223,123,239,189,186,131,7,15,214,55,181,220,202,149,43,131,82,82,82,108,182,55,104,208,32,93,72,72,
136,102,243,230,205,141,214,217,167,79,31,109,98,98,162,127,94,94,94,141,253,87,224,189,50,50,50,12,111,191,253,118,77,97,97,161,213,221,219,234,217,179,167,246,166,155,110,210,174,89,179,166,218,85,109,
62,247,220,115,134,188,188,188,154,163,71,143,54,171,126,123,251,65,75,215,235,223,191,191,46,38,38,70,179,97,195,134,38,247,119,123,237,141,28,57,82,95,88,88,88,191,125,251,118,75,75,234,241,70,145,145,
145,126,227,199,143,15,204,202,202,58,231,201,237,46,95,190,60,40,45,45,173,210,106,117,205,174,175,213,106,177,120,241,226,160,212,212,84,167,255,29,6,14,28,168,11,11,11,211,188,245,214,91,14,31,23,207,
155,61,123,182,113,233,210,165,85,37,37,37,13,246,150,117,197,126,98,171,141,133,11,23,26,103,207,158,93,85,94,94,110,183,14,111,54,117,234,84,67,126,126,126,77,81,81,145,205,29,35,62,62,190,82,91,84,
84,20,100,54,155,219,122,170,48,171,213,138,234,234,106,152,205,230,64,87,181,89,87,87,215,162,54,79,157,58,5,63,63,63,152,205,102,135,79,108,12,6,3,44,22,11,204,102,115,128,189,101,43,43,43,113,252,248,
113,131,217,108,110,114,57,171,213,218,100,123,167,78,157,66,93,93,157,205,58,147,146,146,16,17,17,1,179,217,108,180,251,2,188,216,185,115,231,112,252,248,241,64,123,127,47,87,136,137,137,65,121,121,57,
204,102,179,193,85,109,182,180,126,123,251,65,75,215,43,41,41,129,209,104,180,187,191,219,107,175,172,172,12,39,78,156,128,173,215,217,220,215,225,13,106,107,107,81,83,83,3,179,217,172,247,228,118,235,
235,235,81,84,84,20,80,95,223,228,185,191,195,116,58,157,195,199,169,203,149,148,148,156,255,55,116,250,130,175,166,166,6,199,142,29,211,23,23,23,219,93,214,21,251,137,173,54,106,107,107,113,244,232,81,
125,89,89,89,75,154,87,156,163,199,20,63,15,213,67,68,68,68,110,196,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,
72,5,24,232,68,68,68,42,192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,72,5,24,232,68,68,68,42,192,64,39,34,
34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,72,5,24,232,68,68,68,42,192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,
136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,72,5,24,232,68,68,68,42,192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,
116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,72,5,24,232,68,68,68,42,192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,
3,157,136,136,72,5,24,232,68,68,68,42,192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,0,3,157,136,136,72,5,24,232,68,68,68,42,
192,64,39,34,34,82,1,6,58,17,17,145,10,48,208,137,136,136,84,128,129,78,68,68,164,2,12,116,34,34,34,21,96,160,19,17,17,169,128,86,201,141,235,245,128,209,104,251,247,97,97,128,159,141,83,142,128,0,32,
40,72,190,143,140,172,67,100,100,17,122,245,114,126,93,0,184,249,230,163,208,104,52,168,171,115,124,93,157,206,130,46,93,222,195,164,73,64,121,249,133,223,87,84,0,101,101,64,105,233,133,47,141,198,106,
251,69,146,234,25,12,64,96,160,227,203,235,116,21,104,219,246,202,159,95,190,223,94,206,104,252,21,87,95,109,191,253,152,152,74,196,199,159,188,228,253,210,152,176,176,67,77,46,19,23,119,2,122,253,105,
155,191,143,140,220,141,1,3,236,215,3,0,33,33,128,70,3,156,61,123,225,103,86,171,188,151,42,42,46,188,151,106,106,28,107,207,87,24,141,64,124,60,16,27,11,116,236,8,36,37,189,131,121,243,172,8,13,5,218,
180,145,47,237,127,143,210,193,193,128,78,103,187,173,134,6,249,27,93,76,163,177,224,250,235,179,241,201,39,141,175,99,177,92,122,252,186,88,108,236,78,4,4,4,224,206,59,47,253,121,117,53,80,85,213,244,
235,234,219,119,29,22,45,58,251,191,229,42,43,129,218,218,198,151,189,246,218,215,49,127,254,149,63,47,43,147,125,192,17,157,59,111,70,70,134,172,115,177,164,164,191,99,244,232,90,155,245,214,213,201,
254,229,140,170,42,249,27,56,163,188,92,254,214,206,40,45,149,127,83,0,8,11,59,133,184,184,186,255,253,127,99,66,67,173,26,237,243,207,151,24,163,162,154,31,172,206,135,242,81,0,41,248,227,31,27,95,254,
204,25,219,109,217,218,145,252,253,79,163,109,219,181,72,72,128,205,23,220,212,78,24,29,125,8,85,85,122,116,232,224,248,186,90,109,3,130,131,79,192,100,146,255,63,127,208,214,233,46,188,17,219,180,1,218,
181,3,130,130,166,97,212,40,63,20,22,2,199,142,1,63,254,8,124,255,61,176,127,63,112,224,128,247,29,164,98,99,129,246,237,229,43,50,18,232,208,1,136,136,144,3,10,0,248,251,3,161,161,242,189,159,159,252,
27,159,215,88,16,57,226,226,118,194,195,231,99,216,176,242,255,157,96,57,171,169,253,245,114,90,237,78,104,181,187,144,145,113,229,239,236,29,64,109,155,128,180,180,230,172,39,7,36,163,113,44,10,11,157,
95,55,56,120,34,190,254,90,190,175,168,128,205,191,159,209,184,19,90,173,22,67,135,54,221,94,251,246,11,145,151,103,251,125,19,21,181,21,213,213,213,151,132,240,197,58,119,190,112,160,118,230,192,121,
241,9,144,94,127,225,189,20,28,44,181,252,250,171,188,143,138,138,128,159,127,6,14,30,188,240,126,186,60,208,188,133,86,11,244,232,1,36,39,3,221,186,1,93,187,202,87,116,180,188,158,243,175,197,96,40,65,
93,29,112,232,144,188,150,179,103,37,8,43,43,155,187,93,127,100,101,221,137,181,107,247,56,181,94,155,54,64,207,158,145,8,10,10,194,246,237,63,217,93,254,226,99,2,32,235,154,205,254,77,254,155,59,146,
29,151,51,26,101,189,43,127,254,43,58,119,190,242,231,225,225,63,161,95,63,139,195,39,6,231,57,123,28,211,106,229,164,212,25,129,129,178,175,59,162,93,187,23,49,96,192,89,4,4,200,137,125,99,242,243,203,
245,218,13,27,66,106,203,202,42,175,248,19,53,39,88,29,89,55,34,162,35,38,76,200,68,74,74,138,237,133,156,20,19,19,141,25,51,102,224,169,167,158,106,214,250,195,134,221,14,63,63,63,172,95,191,222,225,
117,12,6,29,94,123,237,73,140,27,183,197,238,178,139,23,207,196,214,173,175,163,166,166,16,241,241,192,53,215,0,35,70,0,215,94,43,225,185,123,55,176,99,7,16,27,251,15,180,111,47,111,112,79,9,14,6,110,
187,13,24,48,64,14,54,221,187,203,149,210,207,63,3,39,79,2,191,252,2,20,23,203,247,39,78,200,201,199,185,115,178,238,197,7,154,166,206,244,207,107,234,44,253,98,169,169,127,64,65,65,1,142,28,57,210,232,
239,29,185,66,112,132,197,2,116,233,210,19,125,251,246,197,146,37,75,154,221,206,229,87,70,47,188,240,2,150,45,91,134,195,135,15,55,171,189,130,130,245,184,239,190,251,220,182,222,221,119,255,22,241,241,
241,88,189,122,181,157,246,214,54,217,94,106,234,48,236,219,183,15,91,182,52,254,30,40,40,88,220,172,215,97,139,86,43,7,218,246,237,47,92,213,198,197,1,3,7,2,105,105,128,201,36,251,233,206,157,242,126,
218,177,67,190,119,246,106,202,21,252,253,129,222,189,129,187,238,146,247,87,114,178,188,175,191,250,10,216,187,23,216,182,77,254,123,248,240,165,87,110,239,188,243,36,178,178,62,66,125,125,189,75,234,
208,233,52,120,242,201,222,216,180,201,249,117,127,255,251,4,132,135,135,227,149,87,182,59,189,110,231,206,119,98,197,138,127,162,184,216,254,89,92,215,174,163,48,101,202,102,231,11,188,72,65,65,10,198,
141,251,232,138,159,175,91,55,6,227,199,127,139,178,203,47,221,125,204,146,37,211,176,98,197,10,20,54,113,166,127,213,85,97,213,218,175,191,214,91,204,102,207,21,22,28,172,241,220,198,188,68,109,109,0,
14,31,214,99,223,190,43,127,23,22,38,111,252,155,111,6,58,118,220,138,67,135,128,31,126,0,62,248,0,120,247,93,224,155,111,92,95,143,209,8,220,127,63,48,124,56,112,199,29,114,66,241,233,167,192,194,133,
192,158,61,114,181,160,164,226,226,142,248,254,251,64,28,56,224,254,109,197,198,106,81,85,21,216,228,73,40,121,7,139,69,2,251,228,73,224,187,239,174,252,189,86,43,161,222,187,55,112,203,45,114,210,220,
169,19,240,217,103,242,126,122,255,125,192,157,199,58,173,86,78,46,134,15,151,32,63,125,90,182,187,120,49,240,197,23,114,98,76,228,78,138,222,67,39,249,136,245,227,143,229,43,57,121,38,134,12,185,15,253,
251,3,247,220,3,20,20,200,239,223,120,3,120,237,181,150,111,43,58,26,72,77,5,158,126,90,14,136,249,249,192,168,81,114,224,33,242,117,22,11,176,111,159,124,189,250,170,252,44,58,90,194,245,174,187,128,
185,115,47,236,247,27,55,186,238,227,249,132,4,96,252,120,224,15,127,144,79,177,242,243,129,89,179,228,86,0,145,39,177,151,187,151,169,174,6,62,250,72,130,55,62,94,254,155,148,36,247,7,39,76,216,137,132,
132,18,167,219,12,9,145,171,239,31,127,4,98,98,128,62,125,128,254,253,129,151,94,98,152,147,186,21,23,203,201,240,208,161,210,23,100,229,74,96,240,96,185,82,95,185,82,110,127,53,87,207,158,192,166,77,
242,9,151,193,0,12,26,36,183,172,22,46,100,152,147,50,24,232,94,172,190,30,216,178,5,24,61,26,72,76,4,142,29,11,193,51,207,124,138,130,2,57,112,56,98,248,112,233,120,151,144,32,235,60,246,152,156,28,16,
181,54,85,85,192,155,111,2,247,222,43,29,212,170,170,228,62,251,134,13,114,210,236,168,164,36,185,194,255,248,99,185,37,150,144,0,164,164,200,237,42,34,37,49,208,125,196,201,147,192,91,111,117,193,179,
207,254,63,118,236,0,182,110,5,214,174,5,194,195,27,95,190,77,27,224,207,127,6,102,204,144,123,137,67,134,184,247,254,33,145,47,57,114,4,72,79,7,174,190,26,40,44,148,206,106,203,151,55,222,179,250,60,
189,30,152,57,19,248,242,75,57,73,78,76,4,230,207,111,186,19,48,145,39,49,208,125,76,77,141,22,57,57,242,81,161,191,191,220,47,124,232,161,75,151,185,249,102,96,215,46,121,76,168,87,47,9,127,34,186,82,
105,41,48,109,26,208,165,139,156,4,239,219,7,60,240,192,149,203,117,239,14,124,251,173,116,184,75,78,6,178,178,96,243,113,61,34,165,176,83,156,143,58,117,10,120,252,113,185,23,158,151,39,247,239,222,123,
207,138,27,110,56,136,153,51,129,63,253,73,58,211,17,145,125,197,197,242,73,214,128,1,192,43,175,0,219,182,149,161,238,191,15,242,143,27,7,228,228,0,153,153,192,154,53,10,23,74,212,4,6,186,143,251,236,
51,224,134,27,164,87,239,171,175,254,11,6,131,6,3,7,202,99,50,68,228,156,45,91,228,253,244,198,27,86,252,230,55,11,208,208,0,220,126,187,60,75,190,119,175,210,213,17,53,141,31,185,171,192,153,51,50,82,
86,96,96,61,234,235,253,216,115,157,168,5,78,159,6,198,141,107,11,63,63,11,70,140,144,78,169,12,115,242,5,12,116,21,120,238,57,233,244,246,196,19,55,227,147,79,146,241,247,191,203,61,65,34,114,158,191,
63,176,114,229,25,84,85,133,226,153,103,228,209,180,30,61,148,174,138,200,62,6,186,143,155,48,1,24,59,86,70,124,59,125,90,143,207,63,239,129,185,115,229,145,154,142,29,149,174,142,200,247,44,91,6,68,71,
91,241,183,191,141,199,170,85,192,228,201,50,54,132,51,143,182,17,41,129,129,238,195,134,12,1,158,125,86,194,252,226,225,90,87,173,146,123,234,31,124,208,244,228,7,68,116,169,113,227,164,99,220,232,209,
109,97,177,200,44,24,175,191,14,44,88,0,124,248,161,76,182,68,228,173,24,232,62,234,198,27,129,213,171,129,7,31,148,153,153,46,55,115,166,252,124,233,82,143,151,70,228,147,186,118,149,222,236,195,134,
1,103,206,92,122,104,92,178,68,230,59,120,249,101,153,188,136,200,27,49,208,125,80,116,180,76,220,146,145,97,187,55,123,67,3,48,102,140,92,109,60,242,136,103,235,35,242,53,129,129,192,250,245,50,16,211,
174,93,141,47,147,150,38,163,194,217,154,250,153,72,105,12,116,31,227,231,103,197,230,205,50,132,229,203,47,55,189,108,105,169,60,91,187,124,185,76,51,73,68,141,203,206,150,219,86,43,87,218,94,166,186,
26,120,244,81,96,246,108,224,250,235,61,87,27,145,163,24,232,62,230,190,251,118,163,161,65,6,185,112,196,63,255,41,3,207,204,157,235,222,186,136,124,85,66,2,240,212,83,210,193,180,161,161,233,101,191,
255,30,152,51,71,58,206,17,121,27,6,186,15,233,210,229,20,238,184,227,0,70,140,144,137,91,28,53,123,182,76,31,217,171,151,251,106,35,242,85,243,230,73,127,148,195,135,29,91,126,197,10,121,130,228,222,
123,221,91,23,145,179,24,232,62,34,44,12,72,75,219,137,252,252,222,56,114,196,185,117,207,156,145,73,36,114,115,221,82,26,145,207,234,217,83,134,77,94,176,192,241,117,106,107,101,236,135,69,139,0,45,199,
218,36,47,194,64,247,17,11,22,0,251,247,71,224,203,47,175,110,214,250,231,239,163,223,115,143,139,11,35,242,97,185,185,242,9,150,179,163,43,110,218,36,39,202,79,60,225,158,186,136,154,131,129,238,3,58,
119,6,134,14,5,242,242,174,107,118,27,181,181,50,171,84,110,46,175,42,136,0,224,254,251,229,254,249,234,213,206,175,219,208,0,60,243,140,116,166,11,13,117,121,105,68,205,194,64,247,1,217,217,192,139,47,
2,165,165,129,45,106,103,227,70,185,170,120,236,49,23,21,70,228,163,252,253,229,222,249,228,201,64,77,77,243,218,248,226,11,233,116,154,158,238,218,218,136,154,139,129,238,229,174,187,14,184,243,78,215,
220,255,110,104,0,166,76,145,143,24,67,66,90,222,30,145,175,26,59,22,40,47,7,54,111,110,89,59,25,25,64,106,42,31,11,37,239,192,64,247,114,115,230,0,139,23,59,127,143,207,150,127,252,67,174,44,38,77,114,
77,123,68,190,38,56,88,6,144,73,79,183,255,152,154,61,135,15,3,235,214,201,200,140,68,74,99,160,123,177,228,100,224,214,91,93,255,204,235,228,201,50,234,85,135,14,174,109,151,200,23,76,153,2,108,223,46,
31,151,187,66,118,54,240,192,3,210,99,158,72,73,12,116,47,150,147,35,247,249,202,203,93,219,238,15,63,200,48,151,217,217,174,109,151,200,219,197,196,0,41,41,142,15,204,228,136,146,18,96,225,66,121,175,
18,41,137,129,238,165,250,245,147,201,34,214,172,113,79,251,51,103,2,15,61,36,247,232,137,90,139,57,115,100,228,196,131,7,93,219,238,11,47,200,251,117,208,32,215,182,75,228,12,6,186,151,154,63,95,66,183,
170,202,61,237,159,60,9,60,255,188,115,3,106,16,249,178,238,221,229,163,113,119,12,131,92,93,13,76,159,46,131,205,248,241,168,74,10,225,174,231,133,6,15,6,162,162,128,215,94,115,239,118,22,47,150,43,244,
1,3,220,187,29,34,111,176,104,145,156,40,159,56,225,158,246,243,243,129,186,58,96,228,72,247,180,79,100,15,3,221,203,104,52,192,172,89,64,86,150,28,28,220,169,170,74,182,147,155,203,171,10,82,183,223,
253,78,62,18,95,190,220,125,219,176,90,165,231,252,156,57,128,209,232,190,237,16,217,194,195,184,151,25,50,4,208,233,100,122,84,79,200,203,147,137,94,30,125,212,51,219,35,242,52,63,63,57,105,205,204,4,
206,157,115,239,182,182,109,3,118,239,150,153,219,136,60,141,129,238,69,52,26,43,178,178,100,136,86,171,213,51,219,180,90,101,112,140,121,243,120,85,65,234,52,122,180,124,242,181,126,189,103,182,151,158,
46,95,237,219,123,102,123,68,231,49,208,189,72,92,220,86,84,86,2,5,5,158,221,238,214,173,50,207,115,106,170,103,183,75,228,110,6,131,116,46,205,200,240,220,73,242,254,253,50,2,221,244,233,158,217,30,209,
121,12,116,47,17,16,0,36,37,109,68,102,102,203,71,175,106,142,140,12,25,112,38,58,218,243,219,38,114,151,73,147,128,61,123,128,45,91,60,187,221,105,211,128,71,30,145,251,246,68,158,194,64,247,18,227,198,
1,213,213,17,30,63,240,156,247,221,119,192,219,111,203,60,207,68,106,16,21,5,76,156,40,35,195,121,90,113,177,140,240,232,142,71,228,136,108,97,160,123,1,131,65,174,142,247,239,31,165,104,29,211,167,3,
35,70,0,38,147,162,101,16,185,68,118,182,204,91,190,119,175,50,219,207,205,5,122,247,150,30,246,68,158,192,64,247,2,105,105,192,183,223,2,167,79,119,81,180,142,227,199,129,21,43,100,200,89,34,95,118,205,
53,192,176,97,202,78,154,82,81,33,219,207,201,145,78,121,68,238,198,64,87,88,88,152,220,231,155,49,67,233,74,196,130,5,192,45,183,0,125,251,42,93,9,81,243,45,92,8,44,89,2,252,242,139,178,117,188,252,178,
60,61,50,116,168,178,117,80,235,192,64,87,88,122,186,116,216,249,247,191,149,174,68,84,84,200,192,54,185,185,188,170,32,223,116,219,109,242,81,247,146,37,74,87,34,99,60,76,153,34,87,233,122,189,210,213,
144,218,49,208,21,20,17,33,51,63,121,219,172,103,47,189,36,115,70,63,244,144,210,149,16,57,71,163,145,225,93,167,77,115,253,44,133,205,245,215,191,2,135,14,201,123,157,200,157,24,232,10,154,58,85,122,
150,31,56,160,116,37,151,170,175,151,218,22,44,224,85,5,249,150,71,30,1,218,180,113,255,60,8,206,74,79,151,247,84,187,118,74,87,66,106,198,64,87,72,76,12,48,102,140,247,62,214,82,80,0,28,62,12,60,253,
180,210,149,16,57,38,32,64,110,23,77,154,4,88,44,74,87,115,169,221,187,129,15,63,148,80,39,114,23,6,186,66,178,178,128,215,95,7,126,250,73,233,74,108,203,200,144,143,46,195,195,149,174,132,200,190,212,
84,160,168,72,130,211,27,101,102,202,73,124,231,206,74,87,66,106,197,64,87,64,167,78,192,195,15,123,255,227,97,187,118,1,31,125,164,204,192,28,68,206,104,219,86,198,114,200,200,80,186,18,219,142,29,3,
214,172,145,217,216,136,220,129,129,174,128,217,179,129,213,171,129,95,127,85,186,18,251,158,123,78,70,177,75,76,84,186,18,34,219,102,204,0,62,248,0,248,230,27,165,43,105,218,220,185,192,111,127,11,220,
122,171,210,149,144,26,105,149,46,160,181,233,214,13,184,251,110,223,249,216,237,200,17,96,237,90,185,55,201,41,86,201,27,117,234,4,60,246,24,208,189,187,210,149,216,87,94,46,51,27,230,230,2,125,250,40,
51,111,3,169,23,175,208,61,108,206,28,96,241,98,224,244,105,165,43,113,220,220,185,192,192,129,64,114,178,210,149,16,93,105,254,124,96,213,42,185,127,238,11,94,124,81,30,89,189,255,126,165,43,33,181,97,
160,123,80,114,178,156,149,47,93,170,116,37,206,41,45,189,112,85,65,228,77,110,186,9,184,253,118,121,196,210,87,212,213,73,7,185,5,11,0,157,78,233,106,72,77,24,232,30,52,111,158,124,121,203,128,23,206,
88,181,10,136,141,5,238,189,87,233,74,136,46,120,254,121,185,29,84,86,166,116,37,206,217,188,25,56,113,2,24,59,86,233,74,72,77,24,232,30,210,171,215,57,116,235,38,189,92,125,81,109,173,116,144,91,180,
8,208,178,231,5,121,129,7,31,4,58,116,144,62,30,190,40,61,93,58,243,133,133,41,93,9,169,5,3,221,67,82,83,79,96,230,76,160,170,74,233,74,154,111,211,38,160,164,4,120,226,9,165,43,161,214,78,171,149,254,
40,25,25,114,178,233,139,190,252,18,248,236,51,224,217,103,149,174,132,212,130,129,238,1,137,137,7,16,21,101,241,186,225,40,157,213,208,32,87,21,217,217,64,104,168,210,213,80,107,246,244,211,210,183,227,
221,119,149,174,164,101,38,79,150,49,222,227,227,149,174,132,212,128,129,238,102,26,13,208,175,223,199,88,177,34,18,117,117,74,87,211,114,95,124,1,108,223,46,193,78,164,132,144,16,185,253,147,158,238,
251,143,125,253,244,147,140,59,63,107,150,210,149,144,26,48,208,221,108,200,16,192,207,175,30,31,126,168,158,27,101,25,25,50,204,102,92,156,210,149,80,107,52,117,42,176,109,27,240,175,127,41,93,137,107,
100,103,3,247,220,3,220,120,163,210,149,144,175,99,160,187,145,191,191,140,217,254,249,231,255,7,171,85,233,106,92,167,176,16,88,183,78,94,27,145,39,197,198,2,79,61,37,115,12,168,197,153,51,192,194,133,
124,44,148,90,142,129,238,70,163,70,1,149,149,192,193,131,215,42,93,138,203,101,103,75,47,227,158,61,149,174,132,90,147,156,28,224,213,87,101,126,113,53,89,186,20,184,234,42,32,58,122,151,210,165,144,
15,99,160,187,73,64,128,92,69,100,102,2,128,70,233,114,92,174,164,68,30,97,155,55,79,233,74,168,181,232,209,67,134,77,246,214,41,135,91,162,182,86,30,97,187,238,186,87,248,88,40,53,27,3,221,77,198,141,
147,217,149,182,108,81,186,18,247,89,178,4,232,218,21,24,52,72,233,74,168,53,88,180,72,174,208,79,157,82,186,18,247,88,191,30,168,175,15,196,200,145,62,222,211,143,20,195,64,119,3,131,65,30,71,81,251,
180,163,213,213,192,244,233,114,160,245,227,158,68,110,116,247,221,64,82,18,176,98,133,210,149,184,79,67,3,176,119,239,104,204,156,105,69,80,144,210,213,144,47,226,97,216,13,210,210,100,46,113,181,244,
194,109,74,126,190,140,77,61,98,132,210,149,144,90,249,251,203,184,231,83,167,2,53,53,74,87,227,94,37,37,221,240,237,183,26,76,156,168,116,37,228,139,24,232,46,22,22,6,76,154,36,247,195,90,3,171,85,158,
7,158,59,23,48,26,149,174,134,212,104,204,24,25,97,241,205,55,149,174,196,51,38,79,246,195,196,137,50,172,45,145,51,24,232,46,54,105,18,240,233,167,114,133,222,90,108,219,6,236,217,3,76,152,160,116,37,
164,54,65,65,242,68,197,148,41,190,63,136,140,163,126,248,1,216,184,145,143,133,146,243,24,232,46,20,17,1,140,31,47,7,160,214,102,210,36,185,82,143,142,86,186,18,82,147,244,116,224,171,175,128,173,91,
149,174,196,179,102,204,144,65,169,186,117,83,186,18,242,37,12,116,23,202,204,4,222,121,7,216,191,95,233,74,60,111,255,126,153,18,114,250,116,165,43,33,181,136,138,146,254,40,83,167,42,93,137,231,157,
56,33,79,145,228,228,40,93,9,249,18,6,186,139,196,196,0,143,63,46,51,64,181,86,211,166,1,195,135,203,163,108,68,45,53,103,142,220,55,223,183,79,233,74,148,145,155,11,220,112,3,112,199,29,74,87,66,190,
130,129,238,34,89,89,64,94,158,76,182,208,90,21,23,3,203,150,169,115,224,15,242,172,46,93,128,135,31,110,221,147,150,84,85,201,237,187,220,92,62,22,74,142,209,118,234,212,233,223,122,189,94,231,169,13,
70,71,71,235,44,22,75,164,201,100,58,238,170,54,35,35,35,181,117,117,117,81,205,109,179,77,155,54,97,26,141,70,99,50,153,74,29,93,39,32,32,64,83,89,89,217,209,100,50,29,5,128,45,91,170,131,138,139,253,
107,77,38,221,21,115,170,105,52,154,232,184,184,184,82,139,197,210,228,67,55,165,165,165,87,153,76,38,179,173,223,135,135,135,135,26,141,70,63,91,117,70,70,70,6,27,12,6,189,201,100,82,108,232,141,247,
223,183,250,247,235,247,75,226,245,215,119,56,84,83,227,215,172,17,236,53,26,77,251,184,184,184,51,86,171,213,237,15,41,181,111,223,222,168,211,233,130,76,38,211,73,87,181,89,95,95,223,33,46,46,238,148,
86,171,109,214,76,221,246,246,131,150,174,23,17,17,17,18,20,20,164,51,153,76,167,91,210,158,193,96,104,23,25,25,89,99,50,153,42,90,82,79,99,66,66,172,254,153,153,85,193,161,161,65,101,74,76,213,27,17,
17,209,162,99,74,115,157,61,123,54,222,100,50,21,213,215,215,3,0,118,236,128,38,53,245,104,183,193,131,163,10,15,28,208,87,57,219,158,86,171,213,84,84,84,196,153,76,166,34,103,215,13,15,15,15,13,9,9,241,
55,153,76,103,156,93,183,166,166,38,54,33,33,161,56,44,44,204,98,111,217,150,236,39,246,218,56,119,238,92,199,196,196,196,95,42,42,42,234,91,210,190,210,172,86,107,135,248,248,248,83,254,254,254,54,143,
41,49,49,49,117,255,1,114,180,134,69,160,197,120,72,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Dynamics::dynamics_graph_png = (const char*) resource_Dynamics_dynamics_graph_png;
const int Dynamics::dynamics_graph_pngSize = 6311;


//[EndFile] You can add extra defines here...
//[/EndFile]
