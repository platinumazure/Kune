/**
 * kune.hpp: Interface for Kune::Manager class, which handles globals and
 * maintains its own state.
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

}

#endif
