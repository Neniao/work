#include <iostream>

using namespace std;

#include "Employee.h"
#include "Sales.h"

int main()
{
    Employee bell("bell");
    bell.setLevel(6);
    bell.setSalary(5000);
    printf("%d\n",bell.getSalary());
    printf("%s\n",bell.getName());

    Sales rona("rona");
    rona.setLevel(5);
    rona.setSalary(4000);
    rona.setSalecount(5000);
    printf("%d\n",rona.getSalary());
    printf("%s\n",rona.getName());
    return 0;
}
