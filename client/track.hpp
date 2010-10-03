/**
 * track.hpp
 * Header file for Kune audio tracks.
 **/

#ifndef TRACK_H
#define TRACK_H

#include <string>
#include <SFML/Audio.hpp>

#include "resource.hpp"

namespace Kune
{
	/*Kune track class:
	- Has track name?
	- Has one sound file association in project folder
	- Has contributor?
	*/

	class TrackInfo
	{
		private:

		std::string filename;
		std::string name;

		public:

		TrackInfo(std::string _name, std::string _filename)
		:
		  filename(_filename),
		  name(_name)
		{}

		const std::string &fileName() const { return filename; }
		const std::string &trackName() const { return name; }

	};

	class Track : public Resource
	{
		public:
		
		Track(std::string _name, std::string _filename);
		Track(Track &track);

		std::string fileName() const;
		std::string trackName() const;

		bool open();
		bool write();
		bool replaceSoundData(sf::SoundBuffer &newData);

		bool play();

		private:

		TrackInfo trackInfo;

		sf::SoundBuffer soundData;
		sf::Sound sound;

		protected:
		virtual void loadResource();
		virtual void useResource();
	};

}

#endif
