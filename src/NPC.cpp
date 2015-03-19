#include "NPC.hpp"

NPC::NPC(): Character()
{
}

void NPC::display(RenderWindow *win)
{
  Character::display(win);
}

void NPC::update(float dt)
{
  m_rs.move(0,0);
}

NPC::~NPC()
{
}
