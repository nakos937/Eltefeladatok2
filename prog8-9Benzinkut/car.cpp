#include "car.h"
#include "petrol.h"
#include <iostream>
#include <sstream>

void Car::refuel(PetrolStation* p, unsigned int i, int l)
{
    std::ostringstream os1; os1 << _name << " beall tankolni\n"; std::cout << os1.str();

    if( !p->driveIn(this, i) ) return;
    if( !p->tank(this, l) ) return;
    std::ostringstream os2; os2 << _name << " tankol\n"; std::cout << os2.str();
    std::ostringstream os3; os3 << _name << " fizetett: " << p->pay(this) << " Ft-ot" << std::endl; std::cout << os3.str();
    p->driveOff(this);
    std::ostringstream os4; os4 << _name << " elment\n"; std::cout << os4.str();
}
