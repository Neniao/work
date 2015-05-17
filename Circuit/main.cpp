#include <iostream>

using namespace std;

#include "Circuit.h"
#include "Button.h"
#include "Electrical.h"
#include "Lamp.h"
#include "Fan.h"

int main()
{
    Circuit circuit;

    Lamp lamp;
    Fan fan;
    Button button;

    circuit.setSwitch(&button);
    circuit.append(&fan);
    circuit.append(&lamp);

    button.on();
    button.off();

    return 0;
}
