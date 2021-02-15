// Keszitette:  Nagy Ákos
// Email:       nakos1212@protonmail.com
#pragma once
#include <iostream>

using namespace std;

class Trophy
{
protected:
    string species, pod, dod;
    int size;

public:
    Trophy(const string s, const string pod, const string dod, const int x) : species(s), pod(pod), dod(dod), size(x) {}
    string Species()
    {
        return species;
    }
    virtual char Gender() = 0;
};
