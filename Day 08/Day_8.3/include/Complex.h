#ifndef COMPLEX_H_
#define COMPLEX_H_
// Header file includes declaration of class complex and methods
namespace kdac
{
    class Complex
    {
    private:
        int real;
        int imaginary;

    public:
        // Complex *const this = &c1
        void init_complex(int real, int imaginary);

        // Complex *const this = &c1
        int get_real();

        // Complex *const this = &c1
        void set_real(int real);

        // Complex *const this = &c1
        int get_imaginary();

        // Complex *const this = &c1
        void set_imaginary(int imaginary);
    };
}

#endif /* COMPLEX_H_ */