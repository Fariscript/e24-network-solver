#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// these are the main base values I will be working on for this project, they can be replaced
// with any desired base and the program should still function, for more information how these values
// were chosen : A. F. Van Dyck, "Preferred Numbers," Proc. IRE, vol. 24, no. 2, pp. 159-179,
// Feb. 1936, doi: 10.1109/JRPROC.1936.228053.
const vector<double> E24Base = {1.0, 1.1, 1.2, 1.3, 1.5,
                             1.6, 1.8, 2.0, 2.2, 2.4,
                             2.7, 3.0, 3.3, 3.6, 3.9,
                             4.3, 4.7, 5.1, 5.6, 6.2,
                             6.8, 7.5, 8.2, 9.1};

const int MAX_EXP = 6;
const int MIN_EXP = 0;

// given a base system for resistor values, in our case it will be E24, this function calculates
// all the possible resistor values by multiplying them with the possible power ten multipliers and
// returns them as the possible resistor values in sorted order.
vector<double> RValues(vector<double>Base)
{
    vector<double> result = {};
    for (int i = MIN_EXP; i <= MAX_EXP; i++){
        for (double Rvalue : Base){
            result.push_back(Rvalue * pow(10, i));
        }
    }
    return result;
}

int main()
{
    vector<double> E24Rvalues = RValues(E24Base);
    for (double item : E24Rvalues){
        cout << item <<endl;             // sanity check that my RValues function works
    }
    return 0;
}

