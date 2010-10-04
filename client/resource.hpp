/**
 * resource.hpp
 * Abstract base class for resource loaders.
 **/

#ifndef RESOURCE_H
#define RESOURCE_H

#include <SFML/System.hpp>

#include "resourceLoader.hpp"

namespace Kune
{
	class Resource
	{
		private:

		bool init;

		protected:

		friend class ResourceLoader;

		sf::Mutex initMutex;
		sf::Mutex resourceMutex;

		bool initialized() { sf::Lock l(initMutex); return init; }
		void initialize(bool b) { sf::Lock l(initMutex); init = b; }

		public:
		Resource() { init = false; }
		virtual void loadResource() = 0;
		virtual void useResource() = 0;
	};
}

#endif
