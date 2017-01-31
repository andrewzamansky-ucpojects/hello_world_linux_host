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

#include "MainWindow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainWindow::MainWindow ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	SquareLookAndFeel* laf = new SquareLookAndFeel();
	MyUtils::setupLookAndFeelColours(*laf);
	//setupSquareLookAndFeelColours(*laf);
	setLookAndFeel(laf);

	dynamic_view = new Dynamics();
	viewport->addChildComponent(dynamic_view);

	equalizer_view = new Equalizer();
	viewport->addChildComponent(equalizer_view);

	spatial_view = new Spatial();
	viewport->addChildComponent(spatial_view);


    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Dynamics")));
    label->setFont (Font (16.40f, Font::bold));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleButton1 = new ToggleButton ("new toggle button"));
    toggleButton1->setButtonText (String());
    toggleButton1->addListener (this);
    toggleButton1->setToggleState (true, dontSendNotification);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Equalizer")));
    label2->setFont (Font (16.40f, Font::bold));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleButton2 = new ToggleButton ("new toggle button"));
    toggleButton2->setButtonText (String());
    toggleButton2->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Spatial")));
    label3->setFont (Font (16.40f, Font::bold));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (toggleButton3 = new ToggleButton ("new toggle button"));
    toggleButton3->setButtonText (String());
    toggleButton3->addListener (this);

    addAndMakeVisible (viewport = new Viewport ("new viewport"));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Test GUI")));
    label4->setFont (Font (24.20f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colours::white);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (component = new AndrewPlayer());

    //[UserPreSize]
    //[/UserPreSize]

    setSize (1000, 700);


    //[Constructor] You can add your own custom stuff here..
    viewport->addAndMakeVisible(dynamic_view);
    //[/Constructor]
}

MainWindow::~MainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    toggleButton1 = nullptr;
    label2 = nullptr;
    toggleButton2 = nullptr;
    label3 = nullptr;
    toggleButton3 = nullptr;
    viewport = nullptr;
    label4 = nullptr;
    component = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (12.0f, 356.0f, 156.0f, 30.0f, 10.000f);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (12.0f, 404.0f, 156.0f, 280.0f, 10.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label->setBounds (24, 424, 104, 24);
    toggleButton1->setBounds (128, 424, 24, 24);
    label2->setBounds (24, 472, 104, 24);
    toggleButton2->setBounds (128, 472, 24, 24);
    label3->setBounds (24, 520, 104, 24);
    toggleButton3->setBounds (128, 520, 24, 24);
    viewport->setBounds (184, 64, 800, 624);
    label4->setBounds (16, 16, 150, 24);
    component->setBounds (13, 56, 163, 280);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainWindow::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == toggleButton1)
    {
        //[UserButtonCode_toggleButton1] -- add your button handler code here..
        toggleButton1->setToggleState(true, dontSendNotification);
		toggleButton2->setToggleState(false, dontSendNotification);
		toggleButton3->setToggleState(false, dontSendNotification);		
		selectPartials(0);
        //[/UserButtonCode_toggleButton1]
    }
    else if (buttonThatWasClicked == toggleButton2)
    {
        //[UserButtonCode_toggleButton2] -- add your button handler code here..
		toggleButton1->setToggleState(false, dontSendNotification);
		toggleButton2->setToggleState(true, dontSendNotification);
		toggleButton3->setToggleState(false, dontSendNotification);		
		selectPartials(1);
        //[/UserButtonCode_toggleButton2]
    }
    else if (buttonThatWasClicked == toggleButton3)
    {
        //[UserButtonCode_toggleButton3] -- add your button handler code here..
		toggleButton1->setToggleState(false, dontSendNotification);
		toggleButton2->setToggleState(false, dontSendNotification);
		toggleButton3->setToggleState(true, dontSendNotification);		
		selectPartials(2);
        //[/UserButtonCode_toggleButton3]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void MainWindow::selectPartials (int i)
{
    switch(i){
        case 0:
			dynamic_view->setVisible(true);
			equalizer_view->setVisible(false);
			spatial_view->setVisible(false);			
			viewport->addAndMakeVisible(dynamic_view);
			debugWindow->print("GUI: Select Dynamic View");
            break;
		case 1:
			dynamic_view->setVisible(false);
			equalizer_view->setVisible(true);
			spatial_view->setVisible(false);			
			viewport->addAndMakeVisible(equalizer_view);
			debugWindow->print("GUI: Select Equalizer View");
			break;
	    case 2:
			dynamic_view->setVisible(false);
			equalizer_view->setVisible(false);
			spatial_view->setVisible(true);			
			viewport->addAndMakeVisible(spatial_view);
			break;	
        default:
            break;
    }

}

void MainWindow::setDebugWindow(DebugWindow *adebugWindow)
{
    debugWindow = adebugWindow;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="700">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="12 356 156 30" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <ROUNDRECT pos="12 404 156 280" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="1b5b1b669248de9e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="24 424 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Dynamics" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16.399999999999998579" bold="1" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="6cc0e29dc36ce786" memberName="toggleButton1"
                virtualName="" explicitFocusOrder="0" pos="128 424 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="1"/>
  <LABEL name="new label" id="82a049741e00f875" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="24 472 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Equalizer" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16.399999999999998579" bold="1" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="f6880a868bc6c8e5" memberName="toggleButton2"
                virtualName="" explicitFocusOrder="0" pos="128 472 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="new label" id="f8be1b30bdade15b" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="24 520 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Spatial" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16.399999999999998579" bold="1" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="b127432b0987bc73" memberName="toggleButton3"
                virtualName="" explicitFocusOrder="0" pos="128 520 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <VIEWPORT name="new viewport" id="204e665b1f6576eb" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="184 64 800 624" vscroll="1"
            hscroll="1" scrollbarThickness="18" contentType="1" jucerFile=""
            contentClass="" constructorParams=""/>
  <LABEL name="new label" id="753cb365f0cd9063" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="16 16 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Test GUI" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="24.199999999999999289" bold="0" italic="0" justification="33"/>
  <JUCERCOMP name="" id="c4abcf2773420c68" memberName="component" virtualName=""
             explicitFocusOrder="0" pos="13 56 163 280" sourceFile="AndrewPlayer.cpp"
             constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
