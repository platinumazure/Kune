/**
 * kune.cpp
 * Implementation of primary functionality, coordinating all other parts of the
 * Kune application.
 **/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "kune.hpp"
#include "track.hpp"

namespace Kune
{
	Manager::Manager()
	: window(sf::VideoMode(800, 600, 32), "Kune",
		sf::Style::Titlebar | sf::Style::Close)
	{
		window.SetFramerateLimit(60);
	}

	void Manager::run()
	{
		Track track("Awesome", "res/blah.flac");

		while (window.IsOpened())
		{
			if (!track.initialized() && !track.open())
			{
				std::cerr << "Could not open track." << std::endl;
				exit(1);
			}

			while (window.GetEvent(event))
			{
				handleEvent(event, window);
			}

			window.Clear();

			window.Display();
		}
	}

	void Manager::handleEvent(sf::Event &event, sf::Window &window)
	{
		if (event.Type == sf::Event::Closed)
		{
			window.Close();
		}

		if (event.Type == sf::Event::KeyPressed)
		{
			if (event.Key.Code == sf::Key::Escape)
			{
				window.Close();
			}
		}
	}
}

int main (int argc, char **argv)
{
	Kune::Manager kune;
	kune.run();

	return EXIT_SUCCESS;
}

