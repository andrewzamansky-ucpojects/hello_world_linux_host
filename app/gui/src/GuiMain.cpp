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

#include "GuiMain.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "MainWindow.h"
#include "DebugWindow.h"
//[/MiscUserDefs]

//==============================================================================
GuiMain::GuiMain ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (debugViewPort = new Viewport ("new viewport"));

    addAndMakeVisible (viewPort = new Viewport ("new viewport"));


    //[UserPreSize]
    debugWindow = new DebugWindow();
    mainWindow = new MainWindow();
    viewPort->addAndMakeVisible (mainWindow);
    mainWindow->setDebugWindow(debugWindow);
    debugViewPort->addAndMakeVisible (debugWindow);

    //[/UserPreSize]

    setSize (1000, 900);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GuiMain::~GuiMain()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    debugViewPort = nullptr;
    viewPort = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GuiMain::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::red);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GuiMain::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    debugViewPort->setBounds (0, getHeight() - 210, proportionOfWidth (1.0000f), 210);
    viewPort->setBounds (0, 0, proportionOfWidth (1.0000f), getHeight() - 210);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GuiMain" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1000" initialHeight="900">
  <BACKGROUND backgroundColour="ffff0000"/>
  <VIEWPORT name="new viewport" id="77e2f9b86e9dc9ee" memberName="debugViewPort"
            virtualName="" explicitFocusOrder="0" pos="0 210R 100% 210" vscroll="1"
            hscroll="1" scrollbarThickness="18" contentType="0" jucerFile=""
            contentClass="" constructorParams=""/>
  <VIEWPORT name="new viewport" id="bdaedbe4d636ce14" memberName="viewPort"
            virtualName="" explicitFocusOrder="0" pos="0 0 100% 210M" vscroll="1"
            hscroll="1" scrollbarThickness="18" contentType="0" jucerFile=""
            contentClass="" constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
