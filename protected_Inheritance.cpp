#include <iostream>
using namespace std;

class A {
private:
    int privdataA;
protected:
    int protdataA;
public:
    int pubdataA;

    A(int priv, int prot, int pub) : privdataA(priv), protdataA(prot), pubdataA(pub) {}
};

class B : protected A {
public:
    B(int priv, int prot, int pub) : A(priv, prot, pub) {}

    void funct() {
        int a;
        // a = privdataA; // error: not accessible (private in A)
        a = protdataA; // OK (protected in A, accessible in derived class)
        a = pubdataA; // OK (public in A, accessible in derived class)
    }
};

int main() {
    int a;

    B objB(1, 2, 3);
    // a = objB.privdataA; // error: not accessible (private in A)
    // a = objB.protdataA; // error: not accessible (protected in A)
    // a = objB.pubdataA; // error: not accessible (protected in B)

    return 0;
}

