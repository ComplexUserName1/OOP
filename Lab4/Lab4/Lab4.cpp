#include <iostream>
#include "Money.h"
#include "ATM.h"

using namespace std;

int main() {

    ATM atm(10, 20, 30, 40, 50, 60);

    cout << "You are trying to check your account balance." << endl;
    cout << "Current balance: " << atm.summa() << endl << endl;

    cout << "You are trying to withdraw money from your account." << endl;
    atm.withdraw(740);
    cout << "Current balance: " << atm.summa() << endl << endl;

    cout << "You are trying to deposit money to your account." << endl;
    atm.deposit(0, 0, 0, 0, 0, 100);
    cout << "Current balance: " << atm.summa() << endl << endl;

    atm.withdraw(900000);
    cout << "Current balance: " << atm.summa() << endl;

    return 0;
}