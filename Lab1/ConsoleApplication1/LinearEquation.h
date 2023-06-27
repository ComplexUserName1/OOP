#pragma once
class LinearEquation {
private:
    double k;
    double b;
public:
    void setK(double k);

    void setB(double b);

    double getK();

    double getB();

    double Root(double x);

    void print();
};

