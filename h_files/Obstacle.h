#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <SFML/Graphics.hpp>
#include <memory>
#include <SFML/Graphics/Sprite.hpp>

//#include <Vector2.hpp>

//------------------------------
// OBSTACLE, (Virtual class)
//------------------------------

class Obstacle
{
 public:
  Obstacle() = default;
  ~Obstacle() = default;

 virtual void Move(int const & Game_Speed) = 0;
 virtual void Draw(sf::RenderWindow & window) = 0;

 private:
  //sf::Vector2u Position{}; // Vector that has x-and y-value of Obstacle
  // sf::Shape Body;
  std::unique_ptr<Obstacle> next_obj; // pointer to next obstacle. 

};



//------------------------------
// NET, (public OBSTACLE)
//------------------------------

class Net: public Obstacle
{
 public:
  Net(sf::Vector2f Screen_size, int const & radius)
  {
    net_texture.loadFromFile("Net.jpg");
    Body.setTexture(net_texture);
    Body.setPosition(Screen_size.x, 15);
};
  ~Net() = default;
 

  //TO DO: override the constructor and have it
  //set a net texture for the Body.

  void Move(int const & Game_Speed) override;
  void Draw(sf::RenderWindow & window) override;

 private:
  sf::Texture net_texture;
  sf::Sprite Body; //The object itself, has coordinates and
  //commands for moving and drawing itself.

};


#endif

