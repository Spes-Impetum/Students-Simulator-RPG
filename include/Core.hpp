#ifndef CORE_HPP
#define CORE_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class Scene;

class Core
{
public:
  Core(RenderWindow *win);
  ~Core();

  void update(float dt);
  void display();
  
  void render();
  
private:
  Core& operator=(Core const& c) = delete;
  Core(Core const& c) = delete;
  
  RenderWindow* m_window;
  Scene *m_currentScene;
};


#endif
