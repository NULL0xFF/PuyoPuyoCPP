#ifndef CANVAS_HPP
#define CANVAS_HPP

#include <mutex>
class Canvas
{
private:
    int width;
    int height;
    char **array;
    std::mutex coutMutex;
    void draw();
    void clear();

public:
    Canvas();
    Canvas(int w, int h);
    void update();
};

#endif // CANVAS_HPP