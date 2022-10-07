#include <iostream>

template<class T>
struct MyIter {
    typedef T value_type; // 内嵌型别声明
    T* ptr;

    MyIter(T* p = 0) : ptr(p) {}

    T& operator*() const { return *ptr; }
};

// class type
template<class T>
struct iterator_traits {
    typedef typename T::value_type value_type;
};

template<class T>
struct iterator_traits<T*> {

    typedef T value_type;
};

template<class T>
struct iterator_traits<const T*> {
    typedef T value_type;
};

template<class I>
typename iterator_traits<I>::value_type
func(I ite) {
    std::cout << "normal version" << std::endl;
    return *ite;
}

int main() {
    MyIter<int> ite(new int(8));
    std::cout << func(ite) << std::endl;
    int* p = new int(52);
    std::cout << func(p) << std::endl;
    const int k = 3;
    std::cout << func(&k) << std::endl;
}