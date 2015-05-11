#include <iostream>

#include "Canvas.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Canvas canvas;

    Circle c1;
    Circle c2;
    Rectangle r1;

    canvas.append(&c1);
    canvas.append(&r1);
    canvas.append(&c2);

    canvas.draw();
}
