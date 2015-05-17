#ifndef SALES_H
#define SALES_H

#include "Employee.h"
class Sales:public Employee
{
    public:
        Sales(char* a):Employee(a)
        {
        }
        void setSalecount(int a)
        {
            salecount=a;
        }
    protected:
    private:
        int salecount;
};

#endif // SALES_H

