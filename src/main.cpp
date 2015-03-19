#include <iostream>
#include <SFML/Graphics.hpp>
#include <Core.hpp>
#include <Global.hpp>

using namespace std;
using namespace sf;

int main()
{
  RenderWindow window(VideoMode(SCREEN_WIDTH,SCREEN_HEIGHT), "Student Simulator RPG");
  
  Core core(&window);
  core.render();


  
  return 0;
}
