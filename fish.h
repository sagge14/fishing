//
// Created by Sg on 07.09.2022.
//
#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
#include <ctime>
#include <limits>
#include "myExc.h"
using namespace std;
void vecShuffle(vector<int>& v);
void castInPond(const vector<int>& v, int n);

template<typename T>
void enterValue(T &n, T min = numeric_limits<T>::max(), T max = numeric_limits<T>::max())
{
    n = max / 2;
    do
    {
        if(!cin || (n < min || n > max))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "-------------------Error----------------\n";
            cout << min << " <= number diapason <= " << max;
            cout << "\n-----------------------------------------\n";
            cout << "Repeat enter:";
        }

        cin>>n;
    }
    while(!cin || (n < min || n > max));
}
