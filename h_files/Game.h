#ifndef GAME_H
#define GAME_H
#include "Obstacle.h"
#include <SFML/Graphics.hpp>

class Game
{
 public:
  Game() = default;
  ~Game() = default;

  // void initialize();
  void run();


 private:
  int Game_Speed{1}; //can be used to determine speeds of things
  //right now for objects movement
 sf::Vector2f Screen_size{800,600};
 
 //object testing stuff below, removed later:
 int radius{80}; 
 // sf::Texture net_texture;
 Net net{Screen_size, radius};


};

#endif

