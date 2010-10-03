/**
 * track.cpp
 * Implementation of Kune audio tracks.
 **/

#include <iostream>
#include <string>
#include <SFML/Audio.hpp>

#include "track.hpp"

namespace Kune
{
	Track::Track(std::string _name, std::string _filename)
	:
		trackInfo(_name, _filename)
	{}

	Track::Track(Track &track)
	:
		trackInfo(track.trackInfo),
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

	bool Track::open()
	{
		if (this->initialized()) return true;

		this->initialize(true);

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

	bool Track::play()
	{
		if (!this->initialized()) return false;

		this->sound.SetBuffer(this->soundData);
		sound.Play();

		sf::Sleep(2.0f);
		
		return true;
	}

	void Track::loadResource()
	{
		this->open();
	}

	void Track::useResource()
	{
		this->play();
	}

}
