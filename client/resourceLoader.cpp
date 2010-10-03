/**
 * resourceLoader.cpp
 * Implementation file for class which loads resources in a separate thread.
 **/

#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

#include "resourceLoader.hpp"
#include "track.hpp"

namespace Kune
{
	ResourceLoader::ResourceLoader(Resource *_resource)
	:
		resource(_resource)
	{
		Launch();
	}

	void ResourceLoader::Run()
	{
		sf::Lock(this->mutex);
		this->resource->loadResource();
		this->resource->initialize(true);
		this->resource->useResource();
	}
}
