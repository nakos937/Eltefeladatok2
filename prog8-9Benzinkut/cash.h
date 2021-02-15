#pragma once

class PetrolStation;
class Car;

class Cash
{
public:
    Cash(PetrolStation* p): _p(p) {}
    int pay(unsigned int i);
private:
    PetrolStation * _p;
};
