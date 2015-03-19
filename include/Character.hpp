#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class Character
{
public:
  Character();
  virtual ~Character();

  virtual void update(float dt) = 0;
  virtual void display(RenderWindow *win);
  
protected:
  Character& operator=(Character const& c) = delete;
  Character(Character const& c) = delete;

  RectangleShape m_rs;
  
  /* stat */
  int m_strengh;
  int m_constitution;
  int m_dexterity;
  int m_agility;
  int m_intellect;
  int m_charisma;

  
  
  /* todo classrooms stats  */
  
};


#endif
