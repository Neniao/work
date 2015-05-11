#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
class Canvas
{
    public:
        void draw()
        {
            for (int i=1;i<=len;i++)
            {
                rep[i]->outself();
            }
        }
        void append(Shape* ptr)
        {
            rep[++len]=ptr;
        }
    protected:
    private:
        int len;
        Shape* rep[100];
};

#endif // CANVAS_H
