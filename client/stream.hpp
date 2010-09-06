/**
 * stream.hpp
 * Header file for Kune audio streams. Derived from SFML sf::SoundStream class.
 * Audio streams are meant to play many tracks together.
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

		virtual bool OnStart();
		virtual bool OnGetData(Chunk &data);

		private:

		bool openTrack(Track &track);
		bool writeTrack(Track &track);

		std::vector<sf::Int16>	mySamples;
		std::size_t		myOffset;
		std::size_t		myBufferSize;
	};
}
