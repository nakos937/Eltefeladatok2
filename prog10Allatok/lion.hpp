#pragma once
#include <iostream>
#include "trophy.hpp"

class Lion : public Trophy
{
private:
	char gender;
public:
	Lion(const string s, const string pod, const string dod, const int x, const char& g) : Trophy(s, pod, dod, x), gender(g) {}
    virtual char Gender()
    {
        return gender;
    }
};
