
#include "drawing.hpp"

int main()
{
    text_element t{"Hello world"};
    t.set_colour(0, 0, 127);

    t.draw();
}