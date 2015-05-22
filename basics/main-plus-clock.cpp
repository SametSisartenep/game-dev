#include <SFML/Graphics.hpp>
#include <iostream>

int main ( int argc, char *argv[] ) {
  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML Works!");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  sf::Clock clock;
  while (window.isOpen()) {
    sf::Time elapsed1 = clock.restart();
    sf::Event event;

    std::cout << "Time passed: " << elapsed1.asSeconds() << "||" << elapsed1.asMilliseconds() << "||" << elapsed1.asMicroseconds() << std::endl;

    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;
}
