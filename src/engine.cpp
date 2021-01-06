#include "engine.hpp"

#include <iostream>
#include <chrono>

#define SLEEP(x) sleep(x * 1000)

Engine::Engine(Canvas *canvas) : canvas(canvas)
{
}

void Engine::run()
{
    for (int i = 0; i < 10; i++)
    {
        canvas->update();
        std::cout << "count : " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void Engine::start()
{
    worker = new std::thread(&Engine::run, this);
    worker->join();
}
