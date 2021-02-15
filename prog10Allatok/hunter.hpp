#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "trophy.hpp"
#include "lion.hpp"
#include "elephant.hpp"
#include "rhino.hpp"

using namespace std;

class Hunter
{
private:
    vector<Trophy* > trophies;
    string name;
    int age;

public:
    Hunter(const string& fileName)
    {
        ifstream file(fileName.c_str());
        if (!file.fail())
        {
            file >> name;
            file >> age;
            while (!file.fail())
            {
                string species;
                file >> species;
                if (species == "Lion")
                {
                    string lpod;
                    string ldod;
                    int lage;
                    char g;
                    file >> lpod;
                    file >> ldod;
                    file >> lage;
                    file >> g;
                    trophies.push_back(new Lion(species, lpod, ldod, lage, g));
                }
                else if (species == "Elephant")
                {
                    string epod;
                    string edod;
                    int eage;
                    double t1, t2;
                    file >> epod;
                    file >> edod;
                    file >> eage;
                    file >> t1;
                    file >> t2;
                    trophies.push_back(new Elephant(species, epod, edod, eage, t1, t2));
                }
                else if (species == "Rhino")
                {
                    string rpod;
                    string rdod;
                    int rage;
                    double t;
                    file >> rpod;
                    file >> rdod;
                    file >> rage;
                    file >> t;
                    trophies.push_back(new Rhino(species, rpod, rdod, rage, t));
                }
            }
        }
    }

    int maleLions()
    {
        int x = 0;
        for(auto a : trophies)
        {
            if (a->Species() == "Lion")
            {
                if (a->Gender() == 'm')
                    x++;
            }
        }
        return x;
    }

    string Name(){return name;}
};
