#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "canvas.hpp"
#include <thread>

/**
 * Engine Class
 * 
 * Call Canvas's draw() every 1s
 * Even
 */
class Engine
{
private:
    Canvas *canvas;
    std::thread *worker;
    void run();
    void update();

public:
    Engine(Canvas *canvas);
    void start();
};

#endif // ENGINE_HPP