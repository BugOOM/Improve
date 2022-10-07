#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

template<typename ValueType, class Container = vector<ValueType>, typename Comp = less<ValueType>>
class MyHeap {
private:
    Container container;
    Comp _comp;

public:
    MyHeap() {}

    void swap(int i, int j) {
        ValueType tmp = container[i];
        container[i] = container[j];
        container[j] = tmp;
    }

    void shiftUp(int i) {
        ValueType tmp = container[i];
        while (i > 0 && _comp(tmp, container[(i - 1) >> 1])) {
            container[i] = container[(i - 1) / 2];
            i = (i - 1) >>1;
        }
        container[i] = tmp;
    }

    void insert(ValueType&& v) {
        container.push_back(v);
        shiftUp(container.size() - 1);
    }

    ValueType pop() {
        swap(0, container.size() - 1);
        ValueType ret = container.back();
        container.pop_back();
        adjust_heap(container.size());
        return ret;
    }

    void sort() {
        for (int i = container.size() - 1; i > 0; --i) {
            swap(0, i);
            adjust_heap(i);
        }
    }

    void adjust_heap(int len) {
        int i = 0;
        while (true) {
            int idx = i;
            if (i * 2 + 1 < len && _comp(container[i * 2 + 1], container[idx]))
                idx = i * 2 + 1;
            if (i * 2 + 2 < len && _comp(container[i * 2 + 2], container[idx]))
                idx = i * 2 + 2;
            if (idx == i)
                break;
            swap(idx, i);
            i = idx;
        }
    }

    void print() {
        for (int i = 0; i < container.size(); i++) {
            cout << container[i] << '\t';
        }
        cout << endl;
    }
};

int main() {
    MyHeap<int> h{};
    h.insert(1);
    h.insert(6);
    h.insert(4);
    h.insert(7);
    h.insert(8);
    h.insert(2);
    h.insert(3);
    h.print();
    h.insert(5);
    cout<<h.pop()<<endl;
    h.print();
    h.sort();
    h.print();
    return 0;

}