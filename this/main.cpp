#include <iostream>

class A {
public:
    A() {
        //this = nullptr;
    }
    void add()const{

    }

};

int main() {
    A a;
    a.add();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
