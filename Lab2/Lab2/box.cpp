#include "box.h"
#include <iostream>

box::box(double l, double w, double h) : length(l), width(w), height(h) {
    volume = length * width * height;
}
box::box() : length(1), width(1), height(1) {
    volume = length * width * height;
}
box::box(const box& b) : length(b.length), width(b.width), height(b.height), volume(b.volume) {}
box::~box() {
    std::cout << "The destructor is called" << std::endl;
}

double box::getVolume() const {
    return volume;
}

void box::voi() const {
    std::cout << "The volume of the box is " << getVolume() << std::endl;
}