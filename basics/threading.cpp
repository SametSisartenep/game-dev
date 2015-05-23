#include <SFML/System.hpp>
#include <iostream>

void func () {
  // This function is started when thread.launch() is called.
  for (int i = 0; i < 10; i++) {
    std::cout << "I'm the thread number one" << std::endl;
  }
}

int main ( int argc, char *argv[] ) {
  // Create a thread with func() as entry point
  sf::Thread thread(&func);

  // run it!
  thread.launch();

  // The main thread continues to run
  for (int i = 0; i < 10; i++) {
    std::cout << "I'm the main thread." << std::endl;
  }

  return 0;
}
