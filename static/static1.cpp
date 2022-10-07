
#include<iostream>

using namespace std;

class Apple {
public:
    static int i;

    Apple() {

    };
};

int Apple::i = 1;

int main() {
    Apple obj;
    Apple obj1;
    cout << obj.i << endl;
    obj1.i = 4;
    cout << Apple::i << endl;
    cout << obj.i;
} 