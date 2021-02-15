#pragma once

#include "cash.h"

class Car;

class Pump
{
public:
    Pump() : _current(nullptr), _quantity(0) { }

    void standNextTo(Car* pa) { _current = pa; }
    void fill(Car* pa, int l) { _quantity = l; }
    void leave() { _current = nullptr; }

    Car* getCurrent() const { return _current; }
    int getQuantity() const { return _quantity; }
    void resetQuantity() { _quantity = 0; }
private:
    Car *_current;
    int _quantity;
};
