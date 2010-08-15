/**
 * kune.cpp
 * Implementation of primary functionality, coordinating all other parts of the
 * Kune application.
 **/

#include <iostream>
#include <SFML/Graphics.hpp>

#include "kune.hpp"

int main (int argc, char **argv)
{
	Kune kune;
	kune.run();

	return EXIT_SUCCESS;
}

