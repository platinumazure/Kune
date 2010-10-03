/**
 * resourceLoader.hpp
 * Header file for class which loads resources in a separate thread.
 **/

#ifndef RESOURCE_LOADER_H
#define RESOURCE_LOADER_H

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

#include "resource.hpp"
#include "track.hpp"

namespace Kune
{
	class Resource;

	typedef enum {
		SOUND_BUFFER,

	} ResourceType;


	class ResourceLoader : private sf::Thread
	{
		private:
		sf::Mutex mutex;
		Resource *resource;

		virtual void Run();

		public:
		ResourceLoader(Resource *resource);

	};
}

#endif
