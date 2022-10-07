#include<iostream>

using namespace std;

class A {

};

class B : public A {
    int i;
};

class C {
    int i;
    A a;
};

int main() {
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;

    return 0;
}