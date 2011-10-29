//this is only a test
//concept: array with pointers across the discontinuities
//a vector of pairs containing indicies of starting sections, and pointers to them
//

template <class T> class la {
    public:
        unsigned size();
        T& operator [] (size_type i);
    private:
        T* _blocks[];//heads of sorts
        T* _jumps[];//tails of sorts
        unsigned size;
};
