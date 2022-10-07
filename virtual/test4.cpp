#include<iostream>

using namespace std;

// A为抽象类
class A {
public:
    virtual void f() = 0;  // 纯虚函数
    void g() { this->f(); }

    A() {}  // 构造函数
};

class B : public A {
public:
    void f() { cout << "B:f()" << endl; }  // 实现了抽象类的纯虚函数
};

int main() {
    A* a = new B();
    a->f();
    return 0;
}