#include <iostream>
#include <stdexcept>
#include "MyException.h"
#include "Array.h"

using namespace std;

int main() {

    cin.exceptions(istream::failbit | istream::badbit);

    try {

        int n = 0;

        cout << "Enter the dimension of the array: ";
        cin >> n;
        Array arr(n);

        cout << endl << "Original array:  ";
        arr.print();

        cout << "Min element: " << arr.getMinElement() << endl;

        cout << "The sum of the elements between the first and last positive: " << arr.getSumBetweenPositive() << endl;

        arr.moveZeroesToFront();
        cout << "Converted Array: ";
        arr.print();

    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}