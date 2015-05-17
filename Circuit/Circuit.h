#ifndef CIRCUIT_H
#define CIRCUIT_H
#define elenumberMAX 100

#include "Electrical.h"
#include "Button.h"
class Circuit
{
    public:
        Circuit()
        {
            elenumber=0;
            for (int i=0;i<elenumberMAX;i++)
            {
                electrical[i]=NULL;
            }
        }
        void setSwitch(Button* a)
        {
            a->control=electrical;
        }
        void append(Electrical* a)
        {
            electrical[++elenumber]=a;
        }
        Electrical* electrical[elenumberMAX];
    protected:
    private:
        int elenumber;

};

#endif // CIRCUIT_H
