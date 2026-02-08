#include <iostream>
using std::cout, std::endl;
using std::ostream;

class complex
{
public:
    complex(double r = 0, double i = 0) // constructor with default arguments, pass by value
        : re(r), im(i)                  // member initializer list
    {
    }
    // complex () : re(0), im(0) { }
    complex &operator+=(const complex &); // pass by reference(to avoid copying, use const to avoid modification)
    double real() const { return re; }    // constant member function
    double imag() const { return im; }    // constant member function

    double func(const complex &val)
    {                           // same class member function is friend function each other
        return val.re + val.im; // access private members of another object of the same class
    }

private:
    double re, im;

    friend complex &__doapl(complex *, const complex &);    // friend function
    friend ostream &operator<<(ostream &, const complex &); // Declare as friend to access private members
};

// operator overloading as class member function
inline complex &
complex::operator+=(const complex &val) // Add complex:: prefix to make it a class method
{
    return __doapl(this, val); // do asignment plus
}

inline complex &
__doapl(complex *ths, const complex &val) // first parameter is pointer to complex object
// second parameter is reference to const complex object
{
    ths->re += val.re;
    ths->im += val.im;
    return *ths;
}

// Define operator<< as a friend function to access private members
ostream &operator<<(ostream &os, const complex &x)
{
    return os << '(' << x.real() << ',' << x.imag() << ')';
}

inline double
imag(const complex &x) // non-member function to access private members via public interface
{
    return x.imag();
}

inline double
real(const complex &x) // non-member function to access private members via public interface
{
    return x.real();
}

inline complex // return local object, must be return by value, not by reference
operator+(const complex &x, const complex &y)
{
    return complex(real(x) + real(y), imag(x) + imag(y)); // temp object created by constructor: "typename();"
}

inline complex
operator+(const complex &x, double y)
{
    return complex(real(x) + y, imag(x));
}

inline complex
operator+(double x, const complex &y)
{
    return complex(x + real(y), imag(y));
}

inline complex
operator+(const complex &x) // unary plus, only one parameter
{
    return x;
}

inline complex
operator-(const complex &x) // unary minus
{
    return complex(-real(x), -imag(x));
}

inline bool
operator==(const complex &x, const complex &y)
{
    return real(x) == real(y) && imag(x) == imag(y);
}

inline bool
operator==(const complex &x, double y)
{
    return real(x) == y && imag(x) == 0;
}

inline bool
operator==(double x, const complex &y)
{
    return x == real(y) && imag(y) == 0;
}

inline bool
operator!=(const complex &x, const complex &y)
{
    return real(x) != real(y) || imag(x) != imag(y);
}

inline bool
operator!=(const complex &x, double y)
{
    return real(x) != y || imag(x) != 0;
}

inline bool
operator!=(double x, const complex &y)
{
    return x != real(y) || imag(y) != 0;
}

inline complex
conj (const complex &x)
{
    return complex(real(x), -imag(x));
}

int main()
{
    complex a(1, 2), b(3, 4);
    a += b;
    cout << a.real() << " " << a.imag() << endl;

    const complex c(1, 2);
    cout << c.real() << " " << c.imag() << endl;

    cout << c << endl; // call operator<< to access private members

    cout << a.func(c) << endl; // call member function to access private members of another object of the same class

    complex c1(1, 2), c2(3, 4);
    cout << c1 + c2 << endl;  // test operator+ for complex + complex
    cout << c1 + 5.0 << endl; // test operator+ for complex + double
    cout << 5.0 + c2 << endl; // test operator+ for double + complex

    a += b += c; // chained assignment, test operator+= for complex + complex
    cout << "a = " << a << endl;

    complex c3 = a += b += c; // test operator+= for complex + complex and copy initialization
    cout << "c3 = " << c3 << endl;

    complex c4(2, 1);
    complex c5;

    cout << "-c4 = " << -c4 << endl; // test unary minus operator
    cout << "+c5 = " << +c5 << endl; // test unary plus operator

    cout << "c4 == c5 ? " << (c4 == c5) << endl;
    cout << "c4 == 2.0 ? " << (c4 == 2.0) << endl;
    cout << "2.0 == c4 ? " << (2.0 == c4) << endl;

    cout << "c4 != c5 ? " << (c4 != c5) << endl;
    cout << "c4 != 2.0 ? " << (c4 != 2.0) << endl;
    cout << "2.0 != c4 ? " << (2.0 != c4) << endl;

    cout << "conj(c4) = " << conj(c4) << endl; // test conjugate function
}