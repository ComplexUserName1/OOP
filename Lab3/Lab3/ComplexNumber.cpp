#include "ComplexNumber.h"
#include<iostream>
using namespace std;

ComplexNumber::ComplexNumber(float r = 0, float i = 0) {
    real = r;
    imag = i;
}
ComplexNumber ComplexNumber::operator +(ComplexNumber const& obj) {
    ComplexNumber res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}
ComplexNumber ComplexNumber::operator -(ComplexNumber const& obj) {
    ComplexNumber res;
    res.real = real - obj.real;
    res.imag = imag - obj.imag;
    return res;
}
ComplexNumber ComplexNumber::operator *(ComplexNumber const& obj) {
    ComplexNumber res;
    res.real = real * obj.real - imag * obj.imag;
    res.imag = real * obj.imag + imag * obj.real;
    return res;
}
bool operator ==(ComplexNumber const& first, ComplexNumber const& second) {
    if (second.real == first.real && second.imag == first.imag)
        return true;
    else
        return false;
}
bool operator !=(ComplexNumber const& first, ComplexNumber const& second) {
    if (second.real != first.real || second.imag != first.imag)
        return true;
    else
        return false;
}
void ComplexNumber::display() {
    cout << real << " + " << imag << "i" << endl;
}