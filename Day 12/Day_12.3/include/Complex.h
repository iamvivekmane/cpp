#ifndef COMPLEX_H_
#define COMPLEX_H_
#include "../include/IllegalArgumentException.h"
namespace kdac
{
    class Complex
    {
    private:
        int real;
        int imaginary;

    public:
        Complex(void) throw();
        Complex(int real, int imaginary) throw(IllegalArgumentException);
        void set_real(const int real) throw(IllegalArgumentException);
        void set_imaginary(const int imaginary) throw(IllegalArgumentException);
        int get_real(void) const throw();
        int get_imaginary(void) const throw();
    };
}

#endif /*COMPLEX_H_*/