//this is only a test
//concept: array with pointers across the discontinuities
//a vector of pairs containing indicies of starting sections, and pointers to them
//
#include <vector>
#include <pair>
#include <iostream>

template <class T> class la {
    public:
        unsigned size();
        T operator [] (unsigned);
    private:
        std::vector <std::pair <unsigned, T*>> _jumps;
        T* _data;
        unsigned size;
}
