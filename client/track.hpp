/**
 * track.hpp
 * Header file for Kune audio tracks.
 **/

#ifndef TRACK_H
#define TRACK_H

#include <string>
#include <SFML/Audio.hpp>

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
		  name(_name),
		  filename(_filename)
		{}

		const std::string &fileName() const { return filename; }
		const std::string &trackName() const { return name; }

	};

	class Track
	{
		public:
		
		Track(std::string _name, std::string _filename);
		Track(Track &track);

		std::string fileName() const;
		std::string trackName() const;
		bool initialized() const;

		bool open();
		bool write();
		bool replaceSoundData(sf::SoundBuffer &newData);

		private:

		TrackInfo trackInfo;

		sf::SoundBuffer soundData;
		bool init;
	};

}

#endif
