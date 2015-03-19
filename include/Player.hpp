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
  Player& operator=(Player const& p) = delete;
  Player(Player const& p) = delete;
  
  
};


#endif
