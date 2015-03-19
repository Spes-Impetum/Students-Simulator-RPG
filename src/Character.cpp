#include <Character.hpp>

Character::Character()
{
  m_rs = RectangleShape(Vector2f(10,10));
  m_rs.setFillColor(Color::Red);
}

void Character::display(RenderWindow *win)
{
  win->draw(m_rs);
}

Character::~Character()
{
  
}
