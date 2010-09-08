/**
 * stream.cpp
 * Implementation file for Kune audio streams.
 **/

#include <string>
#include <vector>
#include <SFML/Audio.hpp>

#include "stream.hpp"

namespace Kune
{
	Stream::Stream(std::size_t bufferSize)
	:	myBufferSize(bufferSize),
		myOffset(0)
	{}

	bool Stream::OnStart()
	{
		myOffset = 0;
		return true;
	}

	bool Stream::OnGetData(sf::SoundStream::Chunk &data)
	{
		if (myOffset >= mySamples.size())
		{
			return false;
		}

		if (myOffset + myBufferSize > mySamples.size())
		{
			data.NbSamples = mySamples.size() - myOffset;
		}
		else
		{
			data.NbSamples = myBufferSize;
		}

		data.Samples = &mySamples[myOffset];

		myOffset += data.NbSamples;

		return true;
	}
}
