#pragma once
class Money
{
protected:
    int notes[6];
public:
    Money(int n10, int n50, int n100, int n500, int n1000, int n5000);

    int summa() const;
};

