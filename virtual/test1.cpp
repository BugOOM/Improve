#include<iostream>

using namespace std;

class A {
public:
    virtual void func() {
        cout << "A func" << endl;
    }
};

class B : public A {
public:
    virtual void func() {
        cout << "B func" << endl;
    }
     static void test(){}
};

int main() {
    A* a = new A();
    a->func();
    a = new B();
    a->func();
    return 0;
}