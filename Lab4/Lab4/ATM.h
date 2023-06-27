#pragma once
#include "Money.h"

class ATM : public Money
{
public:

    ATM(int n10, int n50, int n100, int n500, int n1000, int n5000);

    void withdraw(int amount);

    void deposit(int n10, int n50, int n100, int n500, int n1000, int n5000);
};

