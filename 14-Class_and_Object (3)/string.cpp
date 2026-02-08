#include <iostream>
#include <cstring>
using std::cout, std::endl;

class String
{
public:
    String(const char* cstr = 0);

    // Big Three: copy constructor, copy assignment, destructor
    String(const String& str); // copy constructor
    String& operator=(const String& str); // copy assignment
    ~String(); // destructor
    char* get_c_str() const { return m_data; } // accessor function to get C-style string

private:
    char *m_data;
};

inline
String::String(const char* cstr)
{
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else {
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline
String::String(const String& str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    // str.m_data directly access private member of another object of the same class
}

inline
String& String::operator=(const String& str)
{
    if (this == &str) { // check for self-assignment
        return *this;
    }

    delete[] m_data; // free existing resource
    m_data = new char[strlen(str.m_data) + 1]; // allocate new resource
    strcpy(m_data, str.m_data); // copy data
    return *this; // return reference to current object to allow chained assignment
}

inline
String::~String()
{
    delete[] m_data;
}

inline
std::ostream& operator<<(std::ostream& os, const String& str)
{
    os << str.get_c_str();
    return os;
}

int main()
{
    String s1;
    String s2("hello");

    String s3(s2);
    cout << s3 << endl;
    s3 = s2;
    cout << s3 << endl;
}