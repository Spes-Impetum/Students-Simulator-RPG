#ifndef IN_GAME_HPP
#define IN_GAME_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <Scene.hpp>

using namespace sf;

class Player;

class InGame: public Scene
{
public:
  InGame(Core *owner);
  ~InGame();

  void update(float dt);
  void display(RenderWindow *win);
  
private:
  Player *m_player;
  
};

#endif
