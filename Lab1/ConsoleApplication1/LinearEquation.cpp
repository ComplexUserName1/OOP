#include "LinearEquation.h"
#include <iostream>

using namespace std;

void LinearEquation::setK(double k) {
    this->k = k;
}

void LinearEquation::setB(double b) {
    this->b = b;
}

double LinearEquation::getK() {
    return k;
}

double LinearEquation::getB() {
    return b;
}

double LinearEquation::Root(double x) {
    return k * x + b;
}

void LinearEquation::print() {
    cout << "k = " << k << ", b = " << b << endl;
}