#include "RandomArrayWithAlgoritms.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>

RandomArrayWithAlgoritms::RandomArrayWithAlgoritms(int m1, int m2, int size) : data(size) {
    std::generate(data.begin(), data.end(), [m1, m2]() {
        return rand() % (m2 - m1 + 1) + m1;
        });
}

std::vector<int> RandomArrayWithAlgoritms::divideByTwo() const {
    std::vector<int> result(data.size());
    std::transform(data.begin(), data.end(), result.begin(), [](int x) {
        return x / 2;
        });
    return result;
}

std::vector<int> RandomArrayWithAlgoritms::swapFirstTwoWithLastTwo() const {
    if (data.size() < 4) return data;
    std::vector<int> result(data);
    std::swap_ranges(result.begin(), result.begin() + 2, result.end() - 2);
    return result;
}

std::vector<int> RandomArrayWithAlgoritms::replaceLessThanTenWithZero() const {
    std::vector<int> result(data);
    std::replace_if(result.begin(), result.end(), [](int x) { return std::abs(x) < 10; }, 0);
    return result;
}

void RandomArrayWithAlgoritms::print() const {
    std::cout << "                          Original Vector: ";
    for (const auto& x : data) {
        std::cout << std::setw(3) << x << " ";
    }
    std::cout << std::endl;
}