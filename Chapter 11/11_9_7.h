#ifndef __COMPLEX0_H
#define __COMPLEX0_H

#include <iostream>
#include <string>
using namespace std;

class Complex
{
    friend string operator+(Complex& cpx1,Complex& cpx2);
    friend string operator-(Complex& cpx1,Complex& cpx2);
    friend string operator*(Complex& cpx1,Complex& cpx2);
    friend string operator*(const double real,Complex& cpx);
    friend ostream& operator<<(ostream& os, Complex& cpx);
    friend istream& operator>>(istream& is, Complex& cpx);
    friend string operator~(Complex& cpx);
public:
    Complex();
    Complex(const double,const double);
    string operator*(const double real) const;
private:
    double m_real;
    double m_imaginary;
    string m_complex;
};

#endif