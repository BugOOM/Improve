#include<iostream>

using namespace std;
struct {
    int i;
} ano;

int main() {
    decltype(ano) other;
    return 0;
}