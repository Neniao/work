#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "cstdio"
class Circle:public Shape
{
    public:
        void outself()
        {
            printf("Im a circle.\n");
        }
    protected:
    private:
};

#endif // CIRCLE_H
