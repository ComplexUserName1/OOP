#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "RandomArrayWithAlgoritms.h"
#include <iomanip>

int main() {

    srand(time(nullptr));

    RandomArrayWithAlgoritms arr(-50, 50, 10);
    arr.print();

    auto result1 = arr.divideByTwo();
    std::cout << "                           Divided by two: ";
    for (const auto& x : result1) {
        std::cout << std::setw(3) << x << " ";
    }
    std::cout << std::endl << std::endl;

    arr.print();
    auto result2 = arr.swapFirstTwoWithLastTwo();
    std::cout << "          Swapped first two with last two: ";
    for (const auto& x : result2) {
        std::cout << std::setw(3) << x << " ";
    }
    std::cout << std::endl << std::endl;

    arr.print();
    auto result3 = arr.replaceLessThanTenWithZero();
    std::cout << "Replaced less than absolute ten with zero: ";
    for (const auto& x : result3) {
        std::cout << std::setw(3) << x << " ";
    }
    std::cout << std::endl;

    return 0;
}