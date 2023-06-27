#include <iostream>
#include "box.h"

using namespace std;

int main() {

    double length = 0.0;
    double width = 0.0;
    double height = 0.0;

    cin.exceptions(istream::failbit | istream::badbit);

    try
    {
        cout << "Please input length: ";
        cin >> length;

        cout << "Please input width: ";
        cin >> width;

        cout << "Please input height: ";
        cin >> height;
        cout << std::endl;

        box b1(length, width, height);
        box b2;
        box b3(b1);

        cout << "Length = " << length << ", Width = " << width << ", Height = " << height << std::endl;
        b1.voi();
        cout << std::endl;

        cout << "Length = 1" << ", Width = 1" << ", Height = 1" << std::endl;
        b2.voi();
        cout << std::endl;

        cout << "Length = " << length << ", Width = " << width << ", Height = " << height << std::endl;
        b3.voi();
        cout << std::endl;

        return 0;
    }
    catch (istream::failure e)
    {
        cout << "Incorrect input. Try Again.";
    }
}