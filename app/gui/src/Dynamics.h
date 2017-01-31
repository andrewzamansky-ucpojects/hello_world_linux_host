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

#ifndef __JUCE_HEADER_C3027218FCB17FE0__
#define __JUCE_HEADER_C3027218FCB17FE0__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Dynamics  : public Component,
                  public ButtonListener,
                  public SliderListener
{
public:
    //==============================================================================
    Dynamics ();
    ~Dynamics();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;

    // Binary resources:
    static const char* dynamics_graph_png;
    static const int dynamics_graph_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<TextEditor> textEditor2;
    ScopedPointer<Label> label4;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<Slider> slider;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<TextEditor> textEditor3;
    ScopedPointer<TextButton> textButton3;
    ScopedPointer<TextButton> textButton4;
    ScopedPointer<Label> label7;
    ScopedPointer<TextEditor> textEditor4;
    ScopedPointer<Label> label8;
    ScopedPointer<TextEditor> textEditor5;
    ScopedPointer<Label> label9;
    ScopedPointer<TextEditor> textEditor6;
    ScopedPointer<Label> label10;
    ScopedPointer<TextEditor> textEditor7;
    ScopedPointer<Label> label11;
    ScopedPointer<TextEditor> textEditor8;
    ScopedPointer<TextButton> textButton5;
    ScopedPointer<TextButton> textButton6;
    ScopedPointer<Label> label12;
    ScopedPointer<TextEditor> textEditor9;
    ScopedPointer<Label> label13;
    ScopedPointer<TextEditor> textEditor10;
    ScopedPointer<Label> label14;
    ScopedPointer<TextEditor> textEditor11;
    ScopedPointer<Label> label15;
    ScopedPointer<TextEditor> textEditor12;
    ScopedPointer<Label> label16;
    ScopedPointer<TextEditor> textEditor13;
    ScopedPointer<Label> label17;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<Label> label20;
    Image cachedImage_dynamics_graph_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Dynamics)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_C3027218FCB17FE0__
