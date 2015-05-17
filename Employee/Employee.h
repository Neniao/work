#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define lenofnameMAX 20
#include <string>
class Employee
{
    public:
        Employee(char* a)
        {
            strcpy(name,a);
        }
        void setLevel(int a)
        {
            level=a;
        }
        void setSalary(int a)
        {
            salary=a;
        }
        int getSalary()
        {
            return salary;
        }
        char* getName()
        {
            return name;
        }
    protected:
    private:
        char name[lenofnameMAX];
        int salary;
        int level;
};

#endif // EMPLOYEE_H
