#include<iostream>

using namespace std;

class A {
public:
    virtual void func(int i = 10) {
        cout << "A func" << i << endl;
    }
};

class B : public A {
public:
    virtual void func(int i = 20) {
        cout << "B func" << i << endl;
    }
};

int main() {
    A* a = new A();
    a->func();
    a = new B();
    a->func();
    return 0;
}