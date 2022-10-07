#include<iostream>
#include<tr1/array>

using namespace std;

int main() {
    int b=1;
    cout<<std::__addressof(b)<<endl;
    cout<<(int*)std::__addressof(b)<<endl;
    tr1::array<int, 10> a{};
    for (auto it = a.begin(); it != a.end(); ++it)
        cout << *it << endl;
    a[2]=4;
    return 0;
}