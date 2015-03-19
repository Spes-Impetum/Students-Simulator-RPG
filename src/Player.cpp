#include <Player.hpp>

Player::Player(): Character()
{
  m_rs = RectangleShape(Vector2f(50,50));
  m_rs.setFillColor(Color::Blue);
  m_rs.setOutlineColor(Color::Black);
  m_rs.setOutlineThickness(2);
}

void Player::display(RenderWindow *win)
{
  Character::display(win);
}

void Player::update(float dt)
{
  if(Keyboard::isKeyPressed(Keyboard::Up))
    {
      m_rs.move(0,-10);
    }
  if(Keyboard::isKeyPressed(Keyboard::Down))
    {
      m_rs.move(0,10);
    }
  if(Keyboard::isKeyPressed(Keyboard::Left))
    {
      m_rs.move(-10,0);
    }
  if(Keyboard::isKeyPressed(Keyboard::Right))
    {
      m_rs.move(10,0);
    }
}

Player::~Player()
{
  
}
