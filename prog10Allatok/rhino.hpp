#pragma once
#include <iostream>
#include "trophy.hpp"

class Rhino : public Trophy
{
private:
	double tusk;
public:
	Rhino(const string s, const string pod, const string dod, const int x, const double& t) : Trophy(s, pod, dod, x), tusk(t) {}
    virtual char Gender() override
    {
        return 'x';
    }
};
