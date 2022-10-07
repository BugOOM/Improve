#include<iostream>

using namespace std;

class A {
public:
    int v;

    A(int i) : v(i) {
        cout << "ctor" << v << endl;
    }

    ~A() {
        cout << "dtor" << v << endl;
    }
};

int main() {
    {
        A a(1);
        static A b(2);
    }
    cout << "end" << endl;
    return 0;
}