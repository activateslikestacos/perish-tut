#include <iostream>
#include <SFML/Graphics.hpp>

int main() {

	sf::RenderWindow window(sf::VideoMode(500, 500), "Banana", sf::Style::Titlebar);

	while (window.isOpen()) {

		sf::Event e;
		while (window.pollEvent(e)) {

			if (e.type == sf::Event::Closed) {

				window.close();

			}

		}

	}

	return 0;

}