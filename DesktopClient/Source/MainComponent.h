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
class MainComponent  : public juce::AudioAppComponent
{
private:
    int kNumOutputChannels{2};
    
public:
    MainComponent()
    {
        setAudioChannels(0, kNumOutputChannels);
    }
    
    ~MainComponent() override
    {
        shutdownAudio();
    }
    
    void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override
    {
        // Do nothing
    }
    
    void getNextAudioBlock(const juce::AudioSourceChannelInfo &bufferToFill) override
    {
        bufferToFill.clearActiveBufferRegion();
    }
    
    void releaseResources() override
    {
        // Do nothing
    }

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
