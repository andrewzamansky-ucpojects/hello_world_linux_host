/*
  ==============================================================================

    Style.h
    Created: 15 Nov 2016 2:50:24pm
    Author:  Leonardo-Severini

  ==============================================================================
*/

#ifndef STYLE_H_INCLUDED
#define STYLE_H_INCLUDED

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "MyImages.h"
//[/Headers]



//==============================================================================
/** Another really simple look and feel that is very flat and square.
This inherits from CustomLookAndFeel above for the linear bar and slider backgrounds.
*/
struct SquareLookAndFeel : public LookAndFeel_V3
{
	
    void drawToggleButton (Graphics& g, ToggleButton& button, bool isMouseOverButton, bool isButtonDown) override
    {
            
        //if (button.hasKeyboardFocus (true))
        //{
        //    g.setColour (button.findColour (TextEditor::focusedOutlineColourId));
            // g.drawRect (0, 0, button.getWidth(), button.getHeight());
        //}

        float fontSize = jmin (15.0f, button.getHeight() * 0.75f);
        const float tickWidth = fontSize * 1.1f;

        drawTickBox (g, button, 4.0f, (button.getHeight() - tickWidth) * 0.5f,
                    tickWidth, tickWidth,
                    button.getToggleState(),
                    button.isEnabled(),
                    isMouseOverButton,
                    isButtonDown);

        g.setColour (button.findColour (ToggleButton::textColourId));
        g.setFont (fontSize);

        if (! button.isEnabled())
            g.setOpacity (0.5f);

        const int textX = (int) tickWidth + 5;

        g.drawFittedText (button.getButtonText(),
                        textX, 0,
                        button.getWidth() - textX - 2, button.getHeight(),
                        Justification::centredLeft, 10);
    }
    
    void drawButtonBackground(Graphics& g, Button& button, const Colour& backgroundColour, bool isMouseOverButton, bool isButtonDown) override
	{
		Colour baseColour(backgroundColour.withMultipliedSaturation(button.hasKeyboardFocus(true) ? 1.3f : 0.9f)
			.withMultipliedAlpha(button.isEnabled() ? 0.9f : 0.5f));

		if (isButtonDown || isMouseOverButton)
			baseColour = baseColour.contrasting(isButtonDown ? 0.2f : 0.1f);

		const float width = button.getWidth() - 1.0f;
		const float height = button.getHeight() - 1.0f;

		if (width > 0 && height > 0)
		{
			g.setGradientFill(ColourGradient(baseColour, 0.0f, 0.0f,
				baseColour.darker(0.1f), 0.0f, height,
				false));

			g.fillRect(button.getLocalBounds());
		}
	}

	void drawTickBox(Graphics& g, Component& component,
		float x, float y, float w, float h,
		bool ticked,
		bool isEnabled,
		bool /*isMouseOverButton*/,
		bool /*isButtonDown*/) override
	{
		const float boxSize = w * 0.7f;

		bool isDownOrDragging = component.isEnabled() && (component.isMouseOverOrDragging() || component.isMouseButtonDown());
		const Colour colour(component.findColour(TextButton::buttonOnColourId).withMultipliedSaturation((component.hasKeyboardFocus(false) || isDownOrDragging) ? 1.3f : 0.9f)
			.withMultipliedAlpha(component.isEnabled() ? 1.0f : 0.7f));
		g.setColour(colour);

		Rectangle<float> r(x, y + (h - boxSize) * 0.5f, boxSize, boxSize);
		
		// g.fillEllipse(r);
		
		

		if (ticked)
		{
		    Image ligth_on = ImageFileFormat::loadFrom(MyImages::ligth_on_yellow_png, (size_t)MyImages::ligth_on_yellow_pngSize).rescaled(w, w);
		    g.drawImageAt(ligth_on,0,0);
		} else {
		    Image ligth_off = ImageFileFormat::loadFrom(MyImages::ligth_off_png, (size_t)MyImages::ligth_off_pngSize).rescaled(w, w);
		    g.drawImageAt(ligth_off,0,0);
		}
	}

	void drawLinearSliderThumb(Graphics& g, int x, int y, int width, int height,
		float sliderPos, float minSliderPos, float maxSliderPos,
		const Slider::SliderStyle style, Slider& slider) override
	{
		const float sliderRadius = (float)getSliderThumbRadius(slider);

		bool isDownOrDragging = slider.isEnabled() && (slider.isMouseOverOrDragging() || slider.isMouseButtonDown());
		Colour knobColour(slider.findColour(Slider::rotarySliderFillColourId).withMultipliedSaturation((slider.hasKeyboardFocus(false) || isDownOrDragging) ? 1.3f : 0.9f)
			.withMultipliedAlpha(slider.isEnabled() ? 1.0f : 0.7f));
		g.setColour(knobColour);

		if (style == Slider::LinearHorizontal || style == Slider::LinearVertical)
		{
			float kx, ky;

			if (style == Slider::LinearVertical)
			{
				kx = x + width * 0.5f;
				ky = sliderPos;
				g.fillRect(Rectangle<float>(kx - sliderRadius, ky - 2.5f, sliderRadius * 2.0f, 5.0f));
			}
			else
			{
				kx = sliderPos;
				ky = y + height * 0.5f;
				g.fillRect(Rectangle<float>(kx - 2.5f, ky - sliderRadius, 5.0f, sliderRadius * 2.0f));
			}
		}
		else
		{
			// Just call the base class for the demo
			LookAndFeel_V2::drawLinearSliderThumb(g, x, y, width, height, sliderPos, minSliderPos, maxSliderPos, style, slider);
		}
	}

	void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
		float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
	{
		/*const float diameter = jmin(width, height) - 4.0f;
		const float radius = (diameter / 2.0f) * std::cos(float_Pi / 4.0f);
		const float centreX = x + width * 0.5f;
		const float centreY = y + height * 0.5f;
		const float rx = centreX - radius;
		const float ry = centreY - radius;
		const float rw = radius * 2.0f;
		const float angle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
		const bool isMouseOver = slider.isMouseOverOrDragging() && slider.isEnabled();

		const Colour baseColour(slider.isEnabled() ? slider.findColour(Slider::rotarySliderFillColourId).withAlpha(isMouseOver ? 0.8f : 1.0f)
			: Colour(0x80808080));

		Rectangle<float> r(rx, ry, rw, rw);
		AffineTransform t(AffineTransform::rotation(angle, r.getCentreX(), r.getCentreY()));

		float x1 = r.getTopLeft().getX(), y1 = r.getTopLeft().getY(), x2 = r.getBottomLeft().getX(), y2 = r.getBottomLeft().getY();
		t.transformPoints(x1, y1, x2, y2);

		g.setGradientFill(ColourGradient(baseColour, x1, y1,
			baseColour.darker(0.1f), x2, y2,
			false));

		Path knob;
		knob.addRectangle(r);
		g.fillPath(knob, t);

		Path needle;
		Rectangle<float> r2(r * 0.1f);
		needle.addRectangle(r2.withPosition(Point<float>(r.getCentreX() - (r2.getWidth() / 2.0f), r.getY())));

		g.setColour(slider.findColour(Slider::rotarySliderOutlineColourId));
		g.fillPath(needle, AffineTransform::rotation(angle, r.getCentreX(), r.getCentreY()));*/

		const float diameter = jmin(width, height) - 4.0f;
		const float radius = (diameter / 2.0f) * std::cos(float_Pi / 4.0f);
		const float centreX = x + width * 0.5f;
		const float centreY = y + height * 0.5f;
		const float rx = centreX - radius;
		const float ry = centreY - radius;
		const float rw = radius * 2.0f;
		const float angle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
		const bool isMouseOver = slider.isMouseOverOrDragging() && slider.isEnabled();
		
		Image img_knoob = ImageFileFormat::loadFrom(MyImages::knoob_png, (size_t)MyImages::knoob_pngSize).rescaled(diameter, diameter);
		Image img_indicator = ImageFileFormat::loadFrom(MyImages::indicator_png, (size_t)MyImages::indicator_pngSize).rescaled(diameter, diameter);

		AffineTransform transform(AffineTransform::rotation(angle, (float)img_indicator.getWidth() /2, (float)img_indicator.getHeight()/2));
				
		g.drawImageAt(img_knoob,0,0);
		g.drawImageTransformed(img_indicator, transform, false);
	};
	
	
};



#endif  // STYLE_H_INCLUDED
