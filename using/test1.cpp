#include<iostream>

using namespace std;
#define Ns 1
#define global 1

void func() {
    cout << "global func" << endl;
}

namespace ns {
    void func() {
        cout << "ns func" << endl;
    }
}

int main() {
#ifdef Ns
    using ns::func;
#elif
    using ::func;
#else
    void func(){
        cout<<"other func"<<endl;
    }
#endif
    func();
    return 0;
}