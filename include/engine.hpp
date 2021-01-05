#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "canvas.hpp"

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
    void update();

public:
    Engine(Canvas *canvas);
    void run();
};

#endif // ENGINE_HPP