#include "canvas.hpp"

#include <iostream>

Canvas::Canvas() : Canvas(16, 16) {}
Canvas::Canvas(int w, int h)
{
    width = w;
    height = h;

    array = new char *[width];
    for (int y = 0; y < height; y++)
    {
        array[y] = new char[width];
        for (int x = 0; x < width; x++)
            // array[y][x] = 0x20; // ASCII SPACE
            array[y][x] = '.';
    }
};

void Canvas::draw()
{
    coutMutex.lock();
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
            std::cout << array[y][x];
        std::cout << std::endl;
    }
    coutMutex.unlock();
}

void Canvas::clear()
{
    system("clear");
}
void Canvas::update()
{
    clear();
    draw();
}