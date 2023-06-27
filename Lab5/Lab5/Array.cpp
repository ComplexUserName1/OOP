#include "Array.h"
#include "MyException.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

Array::Array(int n) {
    size = 13;

    if (n != size) {
        throw MyException("The size of the array does not match the condition of the task. Try again. The clue lies in the number 13.");
    }

    // выделяем память для массива
    data = new double[size];

    // вводим данные в массив
    for (int i = 0; i < n; i++) {
        cout << "Input element " << i + 1 << ": ";
        cin >> data[i];
    }
}

Array::~Array() {
    delete[] data;
}

int Array::getMinElement() const {
    int minElement = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < minElement) {
            minElement = data[i];
        }
    }
    return minElement;
}

int Array::getSumBetweenPositive() const {

    bool has_positive = false;

    int firstPositive = -1;
    int lastPositive = -1;
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] > 0) {
            has_positive = true;

            if (firstPositive == -1) {
                firstPositive = i;
            }

            lastPositive = i;
        }
    }

    if (!has_positive)
        throw MyException("There are no positive elements in the array. Try again.");

    if (firstPositive != -1 && lastPositive != -1 && firstPositive != lastPositive) {
        for (int i = firstPositive + 1; i < lastPositive; i++) {
            sum += data[i];
        }
    }

    return sum;
}

void Array::moveZeroesToFront() {

    bool has_zero = false;

    int insertPos = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] == 0) {

            has_zero = true;

            int temp = data[insertPos];
            data[insertPos] = data[i];
            data[i] = temp;
            insertPos++;
        }
    }

    if (!has_zero)
        throw MyException("There are no zero elements in the array. Try again.");
}

void Array::print() const {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << data[i] << " ";
    }
    cout << endl;
}