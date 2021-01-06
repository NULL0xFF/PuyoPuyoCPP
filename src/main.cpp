#include "engine.hpp"

int main(int argc, char *argv[])
{
    (new Engine(new Canvas(8, 8)))->start();
    return 0;
}