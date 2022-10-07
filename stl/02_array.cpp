#include<iostream>
#include<array>

using namespace std;

template<typename T>
void func(T& arr) {
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
}

template<typename T, int size>
void func1(T (& arr)[size]) {
    cout << size << endl;
}

template<typename T, int size>
void func2(T arr) {

}

int main() {
    std::array<int, 0> a;
    cout << typeid(a._M_elems).name() << endl;
    int arr[10] = {1, 2, 3};
    func(arr);
    func1(arr);
    return 0;
}