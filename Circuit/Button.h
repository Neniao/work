#ifndef BUTTON_H
#define BUTTON_H

#include<cstdio>
#include "Electrical.h"
class Button
{
    public:
        void on()
        {
            int i=1;
            while ((*(control+i))!=NULL)
            {
                (*(control+i))->work();
                i++;
            }
        }
        void off()
        {

        }
        Electrical** control;
    protected:
    private:
};

#endif // BUTTON_H
