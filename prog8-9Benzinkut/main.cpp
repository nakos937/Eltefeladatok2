// Keszitette:  Nagy Ákos
// Email:       nakos1212@protonmail.com
// Feladat:     Benzinkutas feladat

#include <iostream>
#include <sstream>
#include "petrol.h"
#include "car.h"

using namespace std;

int main()
{
    PetrolStation p(6) ;
    Car* a = new Car("Sofor");
    a->refuel(&p, 3, 25);

    return 0;
}
