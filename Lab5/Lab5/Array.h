#pragma once
class Array
{
private:
    double* data;
    int size;
public:

    Array(int n);

    ~Array();

    int getMinElement() const;

    int getSumBetweenPositive() const;

    void moveZeroesToFront();

    void print() const;
};

