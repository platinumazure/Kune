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
	  trackInfo(_name, _filename)
	{}

	std::string Track::fileName()
	{
		return trackInfo.fileName();
	}
}
