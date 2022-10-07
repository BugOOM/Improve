#include<iostream>

using namespace std;

int main() {
    using size_t = decltype(sizeof(0));
    using ptrdiff_t = decltype((int*) 0 - (int*) 0);

    cout<< typeid(ptrdiff_t).name()<<endl;
    return 0;
}