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

    double func(const complex & val) { // same class member function is friend function each other
        return val.re + val.im; // access private members of another object of the same class
    }
private:
    double re, im;


    friend complex& __doapl (complex*, const complex&); // friend function
    friend ostream& operator << (ostream&, const complex&);  // Declare as friend to access private members
};

// operator overloading as class member function
inline complex&
complex::operator += (const complex & val)  // Add complex:: prefix to make it a class method
{
    return __doapl (this, val); // do asignment plus
}

inline complex&
__doapl (complex *ths, const complex & val) // first parameter is pointer to complex object
// second parameter is reference to const complex object
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

inline double
imag(const complex& x) // non-member function to access private members via public interface
{
    return x.imag();
}

inline double
real(const complex& x) // non-member function to access private members via public interface
{
    return x.real();
}

int main()
{
    complex a(1,2), b(3,4);
    a += b;
    cout << a.real() << " " << a.imag() << endl;

    const complex c(1,2);
    cout << c.real() << " " << c.imag() << endl;

    cout << c << endl;

    cout << a.func(c) << endl; // call member function to access private members of another object of the same class
}