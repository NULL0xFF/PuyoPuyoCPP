#include "../include/engine.hpp"
#include <iostream>

#define SLEEP(x) sleep(x * 1000)

Engine::Engine(Canvas *canvas) : canvas(canvas)
{
}

void Engine::run()
{
    this->update();

    int count = 0;
    while (count < 10)
    {
        this->update();
        std::cout << count << std::endl;
        count++;
    }
}

void Engine::update()
{
    canvas->clear();
    canvas->draw();
}
