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

#ifndef __JUCE_HEADER_3EBA0499777AD69C__
#define __JUCE_HEADER_3EBA0499777AD69C__

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
class Equalizer  : public Component,
                   public ButtonListener
{
public:
    //==============================================================================
    Equalizer ();
    ~Equalizer();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* dynamics_graph_png;
    static const int dynamics_graph_pngSize;
    static const char* eq_ls_png;
    static const int eq_ls_pngSize;
    static const char* eq_peak_png;
    static const int eq_peak_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ToggleButton> toggleButton;
    ScopedPointer<Label> label;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> textEditor2;
    ScopedPointer<Label> label3;
    ScopedPointer<ToggleButton> toggleButton2;
    ScopedPointer<TextEditor> textEditor5;
    ScopedPointer<TextEditor> textEditor6;
    ScopedPointer<TextEditor> textEditor7;
    ScopedPointer<ToggleButton> toggleButton3;
    ScopedPointer<TextEditor> textEditor9;
    ScopedPointer<TextEditor> textEditor10;
    ScopedPointer<TextEditor> textEditor11;
    ScopedPointer<ToggleButton> toggleButton4;
    ScopedPointer<TextEditor> textEditor13;
    ScopedPointer<TextEditor> textEditor14;
    ScopedPointer<TextEditor> textEditor15;
    ScopedPointer<ToggleButton> toggleButton5;
    ScopedPointer<TextEditor> textEditor17;
    ScopedPointer<TextEditor> textEditor18;
    ScopedPointer<TextEditor> textEditor19;
    ScopedPointer<TextEditor> textEditor23;
    ScopedPointer<ToggleButton> toggleButton7;
    ScopedPointer<TextEditor> textEditor25;
    ScopedPointer<TextEditor> textEditor26;
    ScopedPointer<ToggleButton> toggleButton8;
    ScopedPointer<TextEditor> textEditor29;
    ScopedPointer<TextEditor> textEditor30;
    ScopedPointer<TextEditor> textEditor31;
    ScopedPointer<ToggleButton> toggleButton9;
    ScopedPointer<TextEditor> textEditor33;
    ScopedPointer<TextEditor> textEditor34;
    ScopedPointer<TextEditor> textEditor35;
    ScopedPointer<ToggleButton> toggleButton10;
    ScopedPointer<TextEditor> textEditor37;
    ScopedPointer<TextEditor> textEditor38;
    ScopedPointer<TextEditor> textEditor39;
    ScopedPointer<ToggleButton> toggleButton11;
    ScopedPointer<TextEditor> textEditor41;
    ScopedPointer<TextEditor> textEditor42;
    ScopedPointer<TextEditor> textEditor43;
    ScopedPointer<ToggleButton> toggleButton12;
    ScopedPointer<TextEditor> textEditor47;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<ImageButton> imageButton;
    ScopedPointer<ImageButton> imageButton2;
    ScopedPointer<ImageButton> imageButton3;
    ScopedPointer<ImageButton> imageButton4;
    ScopedPointer<ImageButton> imageButton5;
    ScopedPointer<ImageButton> imageButton6;
    ScopedPointer<ImageButton> imageButton7;
    ScopedPointer<ImageButton> imageButton8;
    ScopedPointer<ImageButton> imageButton9;
    ScopedPointer<ImageButton> imageButton10;
    Image cachedImage_dynamics_graph_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Equalizer)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_3EBA0499777AD69C__
