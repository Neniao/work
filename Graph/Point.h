#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point()
        {
        }
        Point(int a,int b)
        {
            x=a;
            y=b;
        }
        void move(int deltaX,int deltaY)
        {
            x+=deltaX;
            y+=deltaY;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
    protected:
    private:
        int x,y;
};

#endif // POINT_H
