#include<stdio.h>

struct Base {
    int i;
    int j;
};

void Base() {}

int main() {
    struct Base b;
    Base();
}