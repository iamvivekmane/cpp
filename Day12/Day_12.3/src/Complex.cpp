#include "../include/Complex.h"

using namespace kdac;
Complex::Complex(void) throw() : real(0), imaginary(0) {}
Complex::Complex(int real, int imaginary) throw(IllegalArgumentException)
{
    this->set_real(real);
    this->set_imaginary(imaginary);
}
void Complex::set_real(const int real) throw(IllegalArgumentException)
{
    if (real < 0)
    {
        throw IllegalArgumentException("Negative value not allowed");
    }
    this->real = real;
}
void Complex::set_imaginary(const int imaginary) throw(IllegalArgumentException)
{
    if (imaginary < 0)
    {
        throw IllegalArgumentException("Negative value not allowed");
    }
    this->real = imaginary;
}
int Complex::get_real(void) const throw()
{
    return this->real;
}
int Complex::get_imaginary(void) const throw()
{
    return this->imaginary;
}