/*
  ==============================================================================

    MainComponent.h
    Created: 8 Mar 2021 9:23:37pm
    Author:  Andrew Gentile

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class MainComponent  : public juce::Component
{
public:
    MainComponent()
    {
        // Constructor
    }
    
    ~MainComponent() override
    {
        // Destructor
    }

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
