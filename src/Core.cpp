#include <Core.hpp>
#include <Scene.hpp>
#include <InGame.hpp>

Core::Core(RenderWindow *win): m_window(win)
{
  m_currentScene = new InGame(this);
}

void Core::update(float dt)
{
  if( m_currentScene != nullptr )
    {
      m_currentScene->update(dt);
    }
}

void Core::display()
{
  if( m_currentScene != nullptr )
    {
      m_currentScene->display(m_window);
    }
}


void Core::render()
{
  Event event;
  
  while( m_window->isOpen() )
    {
      while( m_window->pollEvent(event) )
	{
	  switch( event.type )
	    {
	    case Event::Closed:
	      m_window->close();
	      break;

	    case Event::KeyPressed:
	      switch( event.key.code )
		{
		  
		case Keyboard::Escape:
		  m_window->close();
		  break;
		  
		default:break;
		}
	      break;  
	      
	    default: break;
	    }
	}

      /* update */
      update(0.0);
      
      /* display */
      m_window->clear(Color(4,139,154));
      display();
      m_window->display();
      

    }
}

Core::~Core()
{
  if( m_currentScene != nullptr )
    {
      delete m_currentScene;
    }
}
