#include<iostream>

using namespace std;

const int func() {
    return 1;
}

// const int * tmp=new int(1)
const int* func1() {
    return new int(1);
}

//int* const tmp=new int(2);
int* const func2() {
    return new int(2);
}

int main() {
    int i = func();

    const int* ptr = func1();
    //*ptr=1;//报错
    const int* ptr1 = func2();
    int* const ptr2 = func2();
    int* ptr3 = func2();
    //*ptr1 = 2; 报错
    //ptr2 = nullptr; 报错
    delete ptr;
    return 0;
}