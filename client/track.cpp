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
	  name(_name),
	  filename(_filename)
	{}
}
