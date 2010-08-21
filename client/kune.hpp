/**
 * kune.h: Interface for Kune class, which handles globals and maintains its
 * own state.
 **/

#ifndef KUNE_H
#define KUNE_H

namespace Kune
{
	class Manager
	{
		public:

		Manager();

		void run();

		private:

		sf::RenderWindow window;
		sf::Event event;

		void handleEvent(sf::Event &event, sf::Window &window);

	};

	Manager::Manager()
	: window(sf::VideoMode(800, 600, 32), "Manager",
		sf::Style::Titlebar | sf::Style::Close)
	{
		window.SetFramerateLimit(60);
	}

	void Manager::run()
	{
		while (window.IsOpened())
		{
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

#endif
