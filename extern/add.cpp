#include<iostream>

extern "C" {
    #include "add.h"
}

using namespace std;

int main() {
    cout << add(2, 4) << endl;
    return 0;
}