
#include "AudioComponent.h"
#include <queue>          // std::queue


AudioComponent::AudioComponent() 
 : Thread("Background Thread")
{

	formatManager.registerBasicFormats();       // [1]
	transportSource.addChangeListener(this);   // [2]

	startThread();

}

AudioComponent::~AudioComponent()
{
	stopThread(1000);
}

void AudioComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate) 
{
	transportSource.prepareToPlay(samplesPerBlockExpected, sampleRate);
}


void AudioComponent::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) 
{
	if (readerSource == nullptr)
	{
		bufferToFill.clearActiveBufferRegion();
		return;
	}

	transportSource.getNextAudioBlock(bufferToFill);


}

void AudioComponent::releaseResources() 
{
	transportSource.releaseResources();
}



void AudioComponent::changeListenerCallback(ChangeBroadcaster* source) 
{
	String msg("");

	if (transportSource.isPlaying())
	{
		sendMessage("file is playing");
	}
	else
	{
		sendMessage("file is stopped");
	}
}


void  AudioComponent::sendMessage(const char *p_str)
{
	String msg(p_str);
	event_queue.push(msg);
}


void AudioComponent::setPosition(float pos)
{
	transportSource.setPosition(pos);
}

void AudioComponent::stop()
{
	transportSource.stop();
	transportSource.setPosition(0.0);
}

int AudioComponent::setPlayFile(File &file)
{
	AudioFormatReader* reader = formatManager.createReaderFor(file); // [10]

	if (reader != nullptr)
	{
		ScopedPointer<AudioFormatReaderSource> newSource = new AudioFormatReaderSource(reader, true);
		transportSource.setSource(newSource, 0, nullptr, reader->sampleRate);
		readerSource = newSource.release();
		sendMessage("file loaded");
		return 0;
	}
	return 1;
}

void  AudioComponent::startToPlay()
{
	transportSource.start();
}


void AudioComponent::getEvent(String& event_msg)
{
	if ((!event_queue.empty()))
	{
		event_msg = event_queue.front();
		event_queue.pop();
	}
	else
	{
		event_msg = "";
	}

}

void AudioComponent::run()
{
	while (!threadShouldExit())
	{
		if ((!event_queue.empty()))
		{
			sendChangeMessage();
		}
		wait(500);
	}
}

AudioComponent *AudioComponentObj;
AudioComponent* createAudioComponent()
{
	AudioComponentObj = new AudioComponent();
	return AudioComponentObj;
}


void AudioComponent::sendCommand(const char* cmd)
{
	String str_cmd(cmd);
	if (true == str_cmd.startsWith("play_file "))
	{
		String filename;
		filename = str_cmd.getLastCharacters(str_cmd.length() - strlen("play_file "));
		File file(filename);
		setPlayFile(file);
	}
	else if (0 == str_cmd.compare("start_play"))
	{
		startToPlay();
	}
	else if (0 == str_cmd.compare("stop_play"))
	{
		stop();
	}
}

