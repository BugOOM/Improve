#include<iostream>
#include<deque>
#include<vector>

using namespace std;

template<typename ValueType, typename Comp=less<ValueType>, typename Container=vector<ValueType>>
class Heap {
private:
    Comp comp;
    Container container;
public:
    Heap() {}

    void _swap(int i, int j) {
        ValueType l = container[i];
        container[i] = container[j];
        container[j] = l;
    }

    void shiftUp() {
        ValueType tmp = container.back();
        int idx = container.size() - 1;
        while (idx) {
            int fidx = (idx - 1) >> 1;
            if (comp(tmp, container[fidx])) {
                container[idx] = container[fidx];
                idx = fidx;
            } else {
                break;
            }
        }
        container[idx] = tmp;
    }

    void insert(ValueType&& x) {
        container.push_back(x);
        shiftUp();
    }

    void adjust(int i, int len) {
        while (true) {
            int midx = i;
            if (i * 2 + 1 < len && comp(container[i * 2 + 1], container[midx]))
                midx = i * 2 + 1;
            if (i * 2 + 2 < len && comp(container[i * 2 + 2], container[midx]))
                midx = i * 2 + 2;
            if (midx == i)
                break;
            _swap(i, midx);
            i = midx;
        }
    }

    ValueType pop() {
        _swap(0, container.size() - 1);
        ValueType ret = container.back();
        container.pop_back();
        adjust(0,container.size());
        return ret;
    }

    void sort() {
        for (int i = container.size() - 1; i > 0; --i) {
            _swap(0, i);
            adjust(0, i);
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
    Heap<int> h{};
    h.insert(1);
    h.insert(6);
    h.insert(4);
    h.insert(7);
    h.insert(8);
    h.insert(2);
    h.insert(3);
    h.print();
    h.insert(5);
    cout << h.pop() << endl;
    h.print();
    h.sort();
    h.print();
    return 0;
}