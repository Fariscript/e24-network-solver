#include <iostream>
#include <set>
#include <cmath>

using namespace std;

set<float> E24Base = {1.0,  1.1,  1.2,  1.3,  1.5,  1.6,  1.8,  2.0, 2.2,  2.4,  2.7,  3.0,  3.3,  3.6,  3.9,  4.3, 4.7,  5.1,  5.6,  6.2,  6.8,  7.5,  8.2,  9.1};

// given a base system for resistor values, in our case it will be E24,
// this function calculates all the possible resistor values by looping over
// the base and returning its power ten multipliers.

set<float> RValues(set<float>Base)
{
    set<float> result = {};
    for (float Rvalue : Base){
        for (int i = 0; i < 7; i++){
            result.insert(Rvalue * pow(10, i));
        }
    }
    return result;
}

int main()
{
    set<float> E24Rvalues = RValues(E24Base);
    for (float item : E24Rvalues){
        cout << item <<endl;
    }
    return 0;
}

