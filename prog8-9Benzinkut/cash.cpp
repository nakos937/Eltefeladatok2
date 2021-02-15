#include "cash.h"
#include "petrol.h"
#include "pump.h"

int Cash::pay(unsigned int i)
{
    int amount = _p->getQuantity(i) * _p->getUnit();
    _p->resetQuantity(i);
    return amount;
}
