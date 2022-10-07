#include<iostream>

using namespace std;

class A {
public:
    int i;
    int j;
};

class B : private A {
public:
    using A::i;
};

int main() {
    B a;
    cout << a.i << endl;
    return 0;
}