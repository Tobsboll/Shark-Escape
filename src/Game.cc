#include "../h_files/Game.h"
#include "../h_files/Obstacle.h" 
#include <SFML/Graphics.hpp>
#include "../SFML-2.4.1/include/SFML/System/Vector2.hpp"
#include <SFML/Graphics/Sprite.hpp>



void Game::run()
{
 
  // Creates the window
  sf::RenderWindow window(sf::VideoMode(Screen_size.x, Screen_size.y), "SHARK ESCAPE!");
  // Define a refresh rate so the animations are not too fast   
  sf::Time resting_time;
  resting_time = sf::milliseconds(5);   


  // Create object tests
    sf::CircleShape red_circle(50.f);
    red_circle.setFillColor(sf::Color::Red);

    //--------------------------
    // LOOP AS LONG AS WINDOW STILL OPEN
    // -------------------------

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
  

	//------------------------------
	// MOVE STUFF
	//------------------------------

	net.Move(Game_Speed); // Later we move entire list of objects
	sf::sleep(resting_time); // for framrate
	

	//------------------------------
	// GET INPUT (test)
	//------------------------------

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	  {
	    // left key is pressed: move our character
	    red_circle.move(-1, 0);
	  
	  }
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	  {
	    // right key is pressed: move our character
	    red_circle.move(1, 0);
	 
	  }
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	  {
	    // up key is pressed: move our character
	    red_circle.move(0,-1);
	  
	  }
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	  {
	    // down key is pressed: move our character
	    red_circle.move(0, 1);
        
	  }

	//-------------------------
	// DRAW TO WINDOW
	//-------------------------

	window.clear();
	window.draw(red_circle);
	//	window.draw(sprite_test);
	net.Draw(window);
        window.display();

    }

}



