#ifndef NPC_HPP
#define NPC_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <Character.hpp>

using namespace sf;

class NPC : public Character
{
    public:
        NPC();
        virtual ~NPC();
        virtual void update(float dt);
        virtual void display(RenderWindow *win);
    protected:
        NPC& operator=(NPC const& n) = delete;
        NPC(NPC const& n) = delete;
    private:
};

#endif // NPC_HPP
