#include "../h_files/Obstacle.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>


//------------------------------
// MOVE
//------------------------------

void Net::Move(int const & Game_Speed)
{
  //moves the object one "step" (designed for one gameloop)
  //to the left.


  if (Body.getPosition().x > 0) // if not at left edge
    {
  this->Body.move(-Game_Speed,0); 
  /* }else
    Body.delete();
}*/
    }

}

//------------------------------
// DRAW
//------------------------------

void Net::Draw(sf::RenderWindow & window)
{
  //prints the Net onto the window


  window.draw(Body);

}
