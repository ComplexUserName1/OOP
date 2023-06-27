#include "Money.h"

Money::Money(int n10 = 0, int n50 = 0, int n100 = 0, int n500 = 0, int n1000 = 0, int n5000 = 0) {
    notes[0] = n10;
    notes[1] = n50;
    notes[2] = n100;
    notes[3] = n500;
    notes[4] = n1000;
    notes[5] = n5000;
}
int Money::summa() const {
    int total = 0;
    const int denominations[] = { 10, 50, 100, 500, 1000, 5000 };
    for (int i = 0; i < 6; i++) {
        total += notes[i] * denominations[i];
    }
    return total;
}