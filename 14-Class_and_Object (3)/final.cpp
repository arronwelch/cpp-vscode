

class BaseClass {
    public:
        virtual int DoSomething(int val);
        void final(); // final not a keyword
        void override(); // override not a keyword
};

class DerivedClassA final: public BaseClass {
    public:
        virtual int  DoSomething(int val) override final; // final specifier to prevent further overriding
};

class DerivedClassB : public DerivedClassA {
    public:
        // virtual int  DoSomething(int val) override;
};

int main() {
    return 0;
}

/*
 * g++ -std=c++11 -fsyntax-only final.cpp
 * g++ -std=c+=11 -C final.cpp
 * g++ -std=c++11 -Wall -Wextra -pedantic -fsyntax-only final.cpp
 */