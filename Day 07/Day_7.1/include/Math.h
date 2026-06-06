#ifndef MATH_H_
#define MATH_H_

// Extern c is used to use c source code in a cpp file

extern "C"
{
    // Declaring functions
    int addition(int num1, int num2);
    int subtraction(int num1, int num2);
    int multiplication(int num1, int num2);
}
#endif /* MATH_H_ */