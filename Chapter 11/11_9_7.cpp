#include "11_9_7.h"

Complex::Complex()
{

}

Complex::Complex(const double real, const double imaginary)
{
    m_real = real;
    m_imaginary = imaginary;
    m_complex = "(" + to_string(real) + "," + to_string(imaginary) + "i)";
}

string operator+(Complex& cpx1,Complex& cpx2)
{
    return "(" + to_string(cpx1.m_real+cpx2.m_real) + "," + to_string(cpx1.m_imaginary+cpx2.m_imaginary) + "i)";
}

string operator-(Complex& cpx1,Complex& cpx2)
{
    return "(" + to_string(cpx1.m_real-cpx2.m_real) + "," + to_string(cpx1.m_imaginary-cpx2.m_imaginary) + "i)";
}

string operator*(Complex& cpx1,Complex& cpx2)
{
    return "(" + to_string(cpx1.m_real*cpx2.m_real - cpx1.m_imaginary*cpx2.m_imaginary) + "," + to_string(cpx1.m_real*cpx2.m_imaginary - cpx1.m_imaginary*cpx2.m_real) + "i)";
}

string Complex::operator*(const double real) const
{
    return "(" + to_string(m_real*real) + "," + to_string(m_imaginary*real) + "i)";
}

string operator*(const double real,Complex& cpx)
{
    return "(" + to_string(cpx.m_real*real) + "," + to_string(cpx.m_imaginary*real) + "i)";
}

ostream& operator<<(ostream& os, Complex& cpx)
{
    os<<cpx.m_complex;
    return os;
}

istream& operator>>(istream& is, Complex& cpx)
{
    cout<<"real: ";
    if(!(is>>cpx.m_real))return is;
    cout<<"imaginary: ";
    is>>cpx.m_imaginary;
    cpx.m_complex = "(" + to_string(cpx.m_real) + "," + to_string(cpx.m_imaginary) + "i)";
    return is;
}

string operator~(Complex& cpx)
{
    return "(" + to_string(cpx.m_real) + "," + to_string(cpx.m_imaginary*-1) + "i)";
}
