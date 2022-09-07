//
// Created by Sg on 07.09.2022.
//
#include "fish.h"

void vecShuffle(vector<int> &v) {
    shuffle(v.begin(), v.end(), std::mt19937(std::random_device()()));
}

void castInPond(const vector<int> &v, const int n) {

    int what = v[n-1];
    if(what == 1)
        throw bootException();
    if (what == 2)
        throw fishException();
}
