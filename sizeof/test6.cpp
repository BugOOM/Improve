#include<iostream>

using namespace std;

#include<iostream>

using namespace std;

class A {
    virtual void fun() {}
};

class B {
    virtual void fun2() {}
};

class C : virtual public A, virtual public B {
public:
    virtual void fun3() {}
};

int main() {

    cout << sizeof(A) << " " << sizeof(B) << " " << sizeof(C);

    return 0;
}
