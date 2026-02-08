#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>
using std::ostream;

class complex {
public:
    complex(double r = 0, double i = 0)
    : re(r), im(i) {}
    complex& operator+=(const complex&);
    double real() const { return re; } // inline member function, defined inside class definition, implicitly inline
    double imag() const { return im; }

private:
    double re, im;

    friend complex& __doapl(complex*, const complex&);
};

inline complex&
__doapl(complex* ths, const complex& val)
{
    ths->re += val.re;
    ths->im += val.im;
    return *ths;
}

inline complex&
complex::operator+=(const complex& val)
{
    return __doapl(this, val);
}

inline complex
operator+(const complex &x, const complex &y)
{
    return complex(real(x) + real(y), imag(x) + imag(y));
}

inline complex
operator+(const complex &x, double y)
{
    return complex(real(x) + y, imag(x));
}

inline complex
operator+(double x, const complex &y)
{
    return complex(x + real(y), imag(y)):
}

inline ostream&
operator << (ostream& os, const complex& x)
{
    return os << "(" << x.real() << "," << x.imag() << ")";
}

#endif