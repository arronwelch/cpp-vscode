#include <iostream>
#include <string>
using namespace std;

// use static member variable and static member function to implement singleton pattern
// Singleton is a design pattern that restricts the instantiation of a class to one single instance.
// This is useful when exactly one object is needed to coordinate actions across the system.
class Singleton {
private:
    static Singleton* m_instance;
    Singleton() {}  // Private constructor
    ~Singleton() {} // Private destructor

public:
    Singleton(const Singleton&) = delete; // Delete copy constructor
    Singleton& operator=(const Singleton&) = delete; // Delete copy assignment

    static Singleton* getInstance() {
        if(m_instance == nullptr) {
            m_instance = new Singleton();
        }
        return m_instance;
    }
    static void destoryInstance() {
        delete m_instance;
        m_instance = nullptr;
    }

private:
    string m_name;
public:
    void setName(const string& name) { m_name = name; }

    const string& getName() const { return m_name; } // const member function: does not modify the object in any way
};

Singleton* Singleton::m_instance = nullptr;

int main(void) {
    Singleton* singleton1 = Singleton::getInstance();
    singleton1->setName("Singleton1");
    cout << "singleton1->getName(): " << singleton1->getName() << endl;

    Singleton* singleton2 = Singleton::getInstance();
    singleton2->setName("Singleton2");
    cout << "singleton2->getName(): " << singleton2->getName() << endl;
    cout << "singleton1->getName(): " << singleton1->getName() << endl;

    Singleton::destoryInstance();
    return 0;
}