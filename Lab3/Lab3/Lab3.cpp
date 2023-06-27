#include<iostream>
#include "ComplexNumber.h"

using namespace std;

int main() {

    cin.exceptions(istream::failbit | istream::badbit);

    try
    {
        float real = 0.0;
        float imag = 0.0;

        cout << "Please input the real part of the first complex number: ";
        cin >> real;

        cout << "Please input the imaginary part of the first complex number: ";
        cin >> imag;

        cout << "C1=" << real << "+" << imag << "i" << endl << endl;
        ComplexNumber c1(real, imag);

        cout << "Please input the real part of the second complex number: ";
        cin >> real;

        cout << "Please input the imaginary part of the second complex number: ";
        cin >> imag;

        cout << "C2=" << real << "+" << imag << "i" << endl << endl;
        ComplexNumber c2(real, imag);

        cout << "C3 = C1 + C2:" << endl;
        ComplexNumber c3 = c1 + c2;
        c3.display();
        cout << endl;

        cout << "C3 = C1 - C2:" << endl;
        c3 = c1 - c2;
        c3.display();
        cout << endl;

        cout << "C3 = C1 * C2:" << endl;
        c3 = c1 * c2;
        c3.display();
        cout << endl;

        cout << "Is C1 and C2 equal?" << endl;
        if (c1 == c2)
            cout << "Equal" << endl;
        else
            cout << "Not Equal" << endl;

        return 0;
    }
    catch (istream::failure e)
    {
        cout << "Incorrect input. Try Again.";
    }
}