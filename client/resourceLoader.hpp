/**
 * resourceLoader.hpp
 * Header file for class which loads resources in a separate thread.
 **/

#ifndef RESOURCE_LOADER_H
#define RESOURCE_LOADER_H

#include <SFML/System.hpp>

namespace Kune
{
	class ResourceLoader : private sf::Thread
	{
		private:
		int x;

		public:
		ResourceLoader(int _x);
	};
}

#endif
