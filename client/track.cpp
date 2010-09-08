/**
 * track.cpp
 * Implementation of Kune audio tracks.
 **/

#include <string>

#include "track.hpp"

namespace Kune
{
	Track::Track(std::string _name, std::string _filename)
	:
		trackInfo(_name, _filename),
		init(false)
	{}

	Track::Track(Track &track)
	:
		trackInfo(track.trackInfo),
		init(track.init),
		soundData(track.soundData)
	{}

	std::string Track::fileName() const
	{
		return trackInfo.fileName();
	}

	std::string Track::trackName() const
	{
		return trackInfo.trackName();
	}

	bool Track::initialized() const
	{
		return init;
	}

	bool Track::open()
	{
		if (init) return true;

		init = true;

		std::string file_name = this->fileName();
		return soundData.LoadFromFile(file_name);
	}

	bool Track::write()
	{
		std::string file_name = this->fileName();
		return soundData.SaveToFile(file_name);
	}

	bool Track::replaceSoundData(sf::SoundBuffer &newBuffer)
	{
		soundData = newBuffer;
		return true;
	}

}
