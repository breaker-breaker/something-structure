//this is only a test
//concept: array with pointers across the discontinuities
//a vector of pairs containing indicies of starting sections, and pointers to them
//

template <class T> class la {
    public:
        unsigned size();
        T operator [] (int index);
    private:
        T* _data;
        unsigned size;
};