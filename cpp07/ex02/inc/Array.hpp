#pragma once 
#include <iostream>

template<typename T> class Array
{
    private:
        T *_data;
        unsigned int size;
    public:
        Array() : _data(NULL), _size(0) {}
        Array(const unsigned int n) : _data(new T[n]), _size(n) {}
        Array(const Array<T> &array) : _data(NULL), _size(0) {*this = array;}
        virtual ~Array() {delete [] _data;}

        Array<T> &operator=(const Array<T> &array)
        {
            if (this != &array)
            {
                if (size > 0)
                    delete [] _data;
                _size = array.size;
                _data = new T[array.size];
                for (int i = 0; i < _size; i++)
                    _data[i] = array._data[i];
            }
            return *this;
        }

        T &operator[](const int i)const
        {
            if (i < 0 || static_cast<unsigned int>i >= size)
                throw OutOfRange();
            return _data[i];
        }

        unsigned int size(void) const {return _size;}

        class OutOfRange : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Array:exception : index out of range");
                }
        };

};

template<typename T> std::ostream &operator<<(std::ostream &out, const Array<T> &array)
{
    unsigned int max = 5;

    out << "[" << array.size() << "]";
    for (int i = 0; i < array.size() && i < max;i++)
        out << array[i] << " ";
    if (max < array.size())
        out << "...";
    out << std::endl;
    return out;
}