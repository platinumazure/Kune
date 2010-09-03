/**
 * stream.cpp
 * Implementation file for Kune audio streams.
 **/

#include <vector>

#include "stream.hpp"

namespace Kune
{
	Stream::Stream(std::size_t bufferSize)
	:	myBufferSize(bufferSize),
		myOffset(0)
	{}

	bool Stream::openTrack(Track &track)
	{
		sf::SoundBuffer soundData;
		std::string filename = track.fileName();

		if (soundData.LoadFromFile(filename))
		{
			Initialize(
				soundData.GetChannelsCount(),
				soundData.GetSampleRate()
			);

			const sf::Int16 *data = soundData.GetSamples();
			mySamples.assign(
				data, 
				data + soundData.GetSamplesCount()
			);
		}

		return false;
	}
}
