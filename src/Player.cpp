#include <Player.hpp>

Player::Player(): Character()
{
}

void Player::display(RenderWindow *win)
{
  Character::display(win);
}

void Player::update(float dt)
{
  m_rs.move(10,0);
}

Player::~Player()
{
  
}
