#include<iostream>

using namespace std;

class A {
public:
    char a;
    int b;
};

class B : A {
public:
    short a;
    long b;
};

class C {
    A a;
    char c;
};

int main() {
    cout<<sizeof(A)<<endl; // 8
    cout<<sizeof(B)<<endl; // 16
    cout<<sizeof(C)<<endl; // 12
    return 0;
}