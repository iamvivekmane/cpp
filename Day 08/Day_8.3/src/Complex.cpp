#include "../include/Complex.h"
using namespace kdac;

// Definition of all methods in Complex.h header file

void Complex::init_complex(int real, int imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

// Complex *const this = &c1
int Complex::get_real()
{
    return this->real;
}

// Complex *const this = &c1
void Complex::set_real(int real)
{
    this->real = real;
}

// Complex *const this = &c1
int Complex::get_imaginary()
{
    return this->imaginary;
}

// Complex *const this = &c1
void Complex::set_imaginary(int imaginary)
{
    this->imaginary = imaginary;
}
