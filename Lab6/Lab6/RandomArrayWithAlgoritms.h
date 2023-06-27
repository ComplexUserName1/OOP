#pragma once
#include <vector>

class RandomArrayWithAlgoritms
{
private:
    std::vector<int> data;
public:
    RandomArrayWithAlgoritms(int m1, int m2, int size);

    std::vector<int> divideByTwo() const;

    std::vector<int> swapFirstTwoWithLastTwo() const;

    std::vector<int> replaceLessThanTenWithZero() const;

    void print() const;
};