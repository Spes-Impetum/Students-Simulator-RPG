#include <iostream>
#include <SFML/Graphics.hpp>
#include <Core.hpp>

using namespace std;
using namespace sf;

int main()
{
  RenderWindow window(VideoMode(640,480), "Student Simulator RPG");
  
  Core core(&window);
  core.render();


  
  return 0;
}
