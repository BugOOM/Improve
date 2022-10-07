#include<iostream>

using namespace std;

void func() {
    int count = 0;
    cout << count << endl;
    count++;
}

void func1() {
    static int count = 0;
    cout << count << endl;
    count++;
}

int main() {
    for (int i = 0; i < 5; i++)
        func();
    for (int i = 0; i < 5; i++)
        func1();
    return 0;
}