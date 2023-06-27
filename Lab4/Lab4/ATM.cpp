#include <iostream>
#include "ATM.h"
#include "Money.h"

using namespace std;

ATM::ATM(int n10 = 0, int n50 = 0, int n100 = 0, int n500 = 0, int n1000 = 0, int n5000 = 0) : Money(n10, n50, n100, n500, n1000, n5000) {}

void ATM::withdraw(int amount) {
    if (amount % 2 != 0) {
        cout << "There are no banknotes in the ATM of the denomination that you want to withdraw." << endl;
        return;
    }

    int result[6] = { 0 };
    const int denominations[] = { 10, 50, 100, 500, 1000, 5000 };
    int total = amount;
    if (total > summa()) {
        cout << "You are trying to withdraw more money than you have stored in your personal account." << endl;
        return;
    }
    for (int i = 5; i >= 0; i--) {
        while (total >= denominations[i] && notes[i] > 0) {
            result[i]++;
            total -= denominations[i];
            notes[i]--;
        }
    }
    cout << "Given: " << endl;
    for (int i = 5; i >= 0; i--) {
        if (result[i] > 0) {
            cout << result[i] << " x " << denominations[i] << endl;
        }
    }
}

void ATM::deposit(int n10 = 0, int n50 = 0, int n100 = 0, int n500 = 0, int n1000 = 0, int n5000 = 0) {
    notes[0] += n10;
    notes[1] += n50;
    notes[2] += n100;
    notes[3] += n500;
    notes[4] += n1000;
    notes[5] += n5000;
    cout << "The balance is replenished." << endl;
}