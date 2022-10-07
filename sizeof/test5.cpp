#include<iostream>

using namespace std;
class A
{
    virtual void fun(){}
};
class C1:public A
{
};

int main() {
    cout<<sizeof(C1)<<endl;
    return 0;
}