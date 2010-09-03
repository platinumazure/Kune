/**
 * track.hpp
 * Header file for Kune audio tracks.
 **/

#ifndef TRACK_H
#define TRACK_H

#include <string>

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

		std::string &fileName() { return filename; }
		std::string &trackName() { return name; }

	};

	class Track
	{
		public:
		
		Track(std::string _name, std::string _filename);

		std::string fileName();

		private:

		TrackInfo trackInfo;
	};

}

#endif
