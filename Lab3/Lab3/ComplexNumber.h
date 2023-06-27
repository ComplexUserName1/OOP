#pragma once
class ComplexNumber
{
private:
    float real;
    float imag;
public:
    ComplexNumber(float r, float i);

    ComplexNumber operator +(ComplexNumber const& obj);

    ComplexNumber operator -(ComplexNumber const& obj);

    ComplexNumber operator *(ComplexNumber const& obj);

    friend bool operator ==(ComplexNumber const& first, ComplexNumber const& second);

    friend bool operator !=(ComplexNumber const& first, ComplexNumber const& second);

    void display();
};

