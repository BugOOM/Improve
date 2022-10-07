#include<iostream>

using namespace std;

class A {
public:
    void f() {
        cout << "A func()" << endl;
    }

    void f(int i) {
        cout << "A func(int)" << endl;
    }
};

class B : public A {
public:
    using A::f;

    void f(int i) {
        cout << "B func(int)" << endl;
    }
};

int main() {
    B a;
    a.f();
    return 0;
}