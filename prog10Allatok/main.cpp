// Keszitette:  Nagy Ákos
// Email:       nakos1212@protonmail.com
#include <iostream>
#include "hunter.hpp"

int main()
{
    Hunter h("input.txt");
    cout << h.Name() << " vadasz " << h.maleLions() << "db him oroszlant ejtett el.";
    return 0;
}
