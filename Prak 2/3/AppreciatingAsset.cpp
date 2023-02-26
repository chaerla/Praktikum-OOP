#include "AppreciatingAsset.hpp"
#include <iostream>
#include <math.h>

using namespace std;

double AppreciatingAsset::getValue(int years){
    return x->getValue(years)*pow(1 + rate, years);
}

