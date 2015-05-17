#ifndef LAMP_H
#define LAMP_H

#include<cstdio>

#include "Electrical.h"
class Lamp:public Electrical
{
    public:
        void work()
        {
            printf("lamp is on.\n");
        }
    protected:
    private:
};

#endif // LAMP_H
