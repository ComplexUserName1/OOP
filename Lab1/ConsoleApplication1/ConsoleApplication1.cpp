#include <iostream>
#include "LinearEquation.h"

using namespace std;

int main() {

    LinearEquation LE;

    double k = 0.0, b = 0.0, x = 0.0;

    cin.exceptions(istream::failbit | istream::badbit);

    try
    {
        cout << "Please input k: ";
        cin >> k;
        LE.setK(k);

        cout << "Please input b: ";
        cin >> b;
        LE.setB(b);

        cout << "Please input x: ";
        cin >> x;

        LE.print();
        cout << "y = " << LE.Root(x) << endl;
        return 0;
    }
    catch (istream::failure e)
    {
        cout << "Incorrect input. Try Again.";
    }

}