#include <iostream>
using std::cout, std::endl;
using std::ostream;

class complex
{
public:
    complex(double r = 0, double i = 0) // constructor with default arguments, pass by value
    : re (r), im (i) // member initializer list
    {}
    // complex () : re(0), im(0) { }
    complex& operator += (const complex &); // pass by reference(to avoid copying, use const to avoid modification)
    double real () const { return re; } // constant member function
    double imag () const { return im; } // constant member function
private:
    double re, im;

    friend complex& __doapl (complex*, const complex&);
    friend ostream& operator << (ostream&, const complex&);  // Declare as friend to access private members
};

complex& complex::operator += (const complex & val)  // Add complex:: prefix to make it a class method
{
    return __doapl (this, val);
}

complex& __doapl (complex *ths, const complex & val)
{
    ths->re += val.re;
    ths->im += val.im;
    return *ths;
}

// Define operator<< as a friend function to access private members
ostream& operator << (ostream& os, const complex& x)
{
    return os << '(' << x.real() << ',' << x.imag() << ')';
}

int main()
{
    complex a(1,2), b(3,4);
    a += b;
    cout << a.real() << " " << a.imag() << endl;

    const complex c(1,2);
    cout << c.real() << " " << c.imag() << endl;

    cout << c << endl;
}