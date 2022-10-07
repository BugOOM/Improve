#include<iostream>

using namespace std;

template<class T>
struct MyIter {
    typedef T value_type; // 内嵌型别声明
    T* ptr;

    MyIter(T* p = 0) : ptr(p) {}

    T& operator*() const { return *ptr; }
};
template<class T>
struct MyIter<T*> {
    typedef T value_type; // 内嵌型别声明
    T* ptr;

    MyIter(T* p = 0) : ptr(p) {}

    T& operator*() const { return *ptr; }
};
template<class I>
typename I::value_type
func(I ite) {
    std::cout << "class version" << std::endl;
    return *ite;
}
template<class I>
I
func(I* ite) {
    std::cout << "class version" << std::endl;
    return *ite;
}
int main() {
    MyIter<int> ite(new int(8));
    cout << func(ite)<<endl;
    cout<<func(new int(1))<<endl;
}
