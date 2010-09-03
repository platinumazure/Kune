/**
 * stream.hpp
 * Header file for Kune audio streams. Derived from SFML sf::SoundStream class.
 **/

#include <vector>
#include <SFML/Audio.hpp>

#include "track.hpp"

namespace Kune
{
	class Stream : public sf::SoundStream
	{
		public:

		Stream(std::size_t bufferSize);

		bool openTrack(Track &track);

		private:

		std::vector<sf::Int16>	mySamples;
		std::size_t		myOffset;
		std::size_t		myBufferSize;
	};
}
