#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include "cstdio"
class Rectangle:public Shape
{
    public:
         void outself()
        {
            printf("Im a rectangle.\n");
        }
    protected:
    private:
};

#endif // RECTANGLE_H
