#ifndef FAN_H
#define FAN_H

#include<cstdio>

#include "Electrical.h"
class Fan:public Electrical
{
    public:
        void work()
        {
            printf("fan if on.\n");
        }
    protected:
    private:
};

#endif // FAN_H
