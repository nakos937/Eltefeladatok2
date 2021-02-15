#pragma once
#include <iostream>
#include "trophy.hpp"

class Elephant : public Trophy
{
private:
	double t1, t2;
public:
	Elephant(const string s, const string pod, const string dod, const int x, const double& t1, const double& t2) : Trophy(s, pod, dod, x), t1(t1), t2(t2) {}
    virtual char Gender() override
    {
        return 'x';
    }
};

