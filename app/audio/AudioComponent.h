#ifndef AUDIOCOMPONENT_H_INCLUDED
#define AUDIOCOMPONENT_H_INCLUDED

#include <queue>          // std::queue

#include "../JuceLibraryCode/JuceHeader.h"

#include "ControlBaseComponent.h"

class Control_PC_App_Component;//forward declaration

class AudioComponent : public AudioSource,
	public ChangeListener,
	public ControlBaseComponent,
	private Thread
{
private :


	void sendMessage(const char *p_str);

public:
	AudioComponent();

	~AudioComponent();


	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;
	void changeListenerCallback(ChangeBroadcaster* source) override;
	void run() override;
	//void setStateCallback(ChangeListener callback);
	int setPlayFile(File &file);
	void startToPlay();
	int isPlaying();
	void setPosition(float pos);
	void stop();
	void sendCommand(const char* cmd) override;
	void addControlCommands();
	void getEvent(String& event) override;


private:


	//==========================================================================
	std::queue<String> event_queue;

	Random random;
	int(*callback)(int);
	AudioFormatManager formatManager;
	ScopedPointer<AudioFormatReaderSource> readerSource;
	AudioTransportSource transportSource;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioComponent)
};


#endif  // AUDIOCOMPONENT_H_INCLUDED
