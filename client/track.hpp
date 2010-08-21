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

	class Track
	{
		private:

		std::string filename;
		std::string name;

		public:

		Track(std::string _name, std::string _filename);

	};

}

#endif
