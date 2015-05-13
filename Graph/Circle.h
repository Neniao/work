#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
class Circle
{
    public:
        Circle(Point a,int r)
        {
            center=a;
            radius=r;
        }
        void move(int deltaX,int deltaY)
        {
            center.move(deltaX,deltaY);
        }
        Point getCenter()
        {
            return center;
        }
    protected:
    private:
        Point center;
        int radius;
};

#endif // CIRCLE_H
