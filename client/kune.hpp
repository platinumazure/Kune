/**
 * kune.h: Interface for Kune class, which handles globals and maintains its
 * own state.
 **/

#ifndef KUNE_H
#define KUNE_H

class Kune
{
	public:

	Kune();

	void run();

	private:

	sf::RenderWindow window;
	sf::Event event;

	void handleEvent(sf::Event &event, sf::Window &window);

};

Kune::Kune()
: window(sf::VideoMode(800, 600, 32), "Kune",
	sf::Style::Titlebar | sf::Style::Close)
{
	window.SetFramerateLimit(60);
}

void Kune::run()
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

void Kune::handleEvent(sf::Event &event, sf::Window &window)
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

#endif
