#include<iostream>

// 使用继承的好处是可以向上查找
struct input_iterator_tag {
};
struct output_iterator_tag {
};
struct forward_iterator_tag : public input_iterator_tag {
};
struct bidirectional_iterator_tag : public forward_iterator_tag {
};
struct random_access_iterator_tag : public bidirectional_iterator_tag {
};

template<class inputIterator, class distance>
inline void __advance(inputIterator& i, distance n,
                      input_iterator_tag) {
    std::cout << "input tag" << std::endl;
}

// output iterator
template<class outputIterator, class distance>
inline void __advance(outputIterator& i, distance n,
                      output_iterator_tag) {
    std::cout << "output tag" << std::endl;
}

// forward iterator
template<class ForwardIterator, class Distance>
inline void __advance(ForwardIterator& i, Distance n,
                      forward_iterator_tag) {
    std::cout << "forward tag" << std::endl;
}

// bidrectional iterator
template<class BidiectionalIterator, class Distance>
inline void __advance(BidiectionalIterator& i, Distance n,
                      bidirectional_iterator_tag) {
    std::cout << "bidrectional tag" << std::endl;

}

// RandomAccess iterator
template<class RandomAccessIterator, class Distance>
inline void __advance(RandomAccessIterator& i, Distance n,
                      random_access_iterator_tag) {
    std::cout << "randomaccess tag" << std::endl;

}

template<class I>
struct Iterator_traits {
    typedef typename I::iterator_category iterator_category;
};

// 针对原生指针设计的"偏特化版"
template<class I>
struct Iterator_traits<I*> {
    typedef random_access_iterator_tag iterator_category;
};
template<class I>
struct Iterator_traits<const I*> {
    typedef random_access_iterator_tag iterator_category;
};

// 对外接口
template<class InputIterator, class Distance>
inline void advance(InputIterator& i, Distance n) {
    // 通过Ierator_traits询问它的iterator_category是谁
    typedef typename Iterator_traits<InputIterator>::iterator_category category;
    __advance(i, n, category()); // 各型别的重载
}
template<class Category>
struct iterator {
    typedef Category iterator_category;
};
int main() {
    iterator<input_iterator_tag> input;
    iterator<output_iterator_tag> output;
    iterator<forward_iterator_tag> forward;
    iterator<bidirectional_iterator_tag> bidect;
    iterator<random_access_iterator_tag> random;
    advance(input, 10);
    advance(output, 10);
    advance(forward, 10);
    advance(bidect, 10);
    advance(random, 10);
    int *p=NULL;
    advance(p,10);
    return 0;
}