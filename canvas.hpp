#ifndef CANVAS_HPP
#define CANVAS_HPP

class Canvas
{
private:
    int width;
    int height;
    char **array;

public:
    Canvas();
    Canvas(int w, int h);
    void draw();
};

#endif // CANVAS_HPP