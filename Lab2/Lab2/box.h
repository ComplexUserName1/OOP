#pragma once
class box
{
private:
    double length;
    double width;
    double height;
    double volume;
public:
    box(double l, double w, double h);

    box();

    box(const box& b);

    ~box();

    double getVolume() const;

    void voi() const;
};

