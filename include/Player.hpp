#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <Character.hpp>

using namespace sf;

class Player: public Character
{
public:
  Player();
  ~Player();

  virtual void update(float dt);
  virtual void display(RenderWindow *win);
  

  
protected:
  Player& operator=(Player const& c) = delete;
  Player(Player const& c) = delete;
  
};


#endif
