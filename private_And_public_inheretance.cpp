#include <iostream>
using namespace std;

class A {
private:
    int privdataA;
protected:
    int protdataA;
public:
    int pubdataA;
};

class B : public A {
public:
    void funct() {
        int a;
        // a = privdataA; // error: not accessible (private in A)
        a = protdataA; // OK (protected in A, accessible in derived class)
        a = pubdataA; // OK (public in A, accessible in derived class)
    }
};

class C : private A {
public:
    void funct() {
        int a;
        // a = privdataA; // error: not accessible (private in A)
        a = protdataA; // OK (protected in A, accessible in derived class)
        a = pubdataA; // OK (public in A, accessible in derived class)
    }
};

int main() {
    int a;
    
    B objB;
    // a = objB.privdataA; // error: not accessible (private in A)
    // a = objB.protdataA; // error: not accessible (protected in A)
    a = objB.pubdataA; // OK (A's public member is accessible)

    C objC;
    // a = objC.privdataA; // error: not accessible (private in A)
    // a = objC.protdataA; // error: not accessible (private in A)
    // a = objC.pubdataA; // error: not accessible (private in A)

    return 0;
}

