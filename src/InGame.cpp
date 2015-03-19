#include <InGame.hpp>
#include <Player.hpp>

InGame::InGame(Core* owner): Scene(owner)
{
  m_player = new Player;
}

void InGame::update(float dt)
{
  m_player->update(dt);
}

void InGame::display(RenderWindow *win)
{
  m_player->display(win);
}


InGame::~InGame()
{
  delete m_player;
}
