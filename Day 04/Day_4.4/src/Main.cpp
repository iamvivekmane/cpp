#include <stdio.h>

int num1 = 10;
namespace na
{
    int num2 = 20;
    namespace nb
    {
        int num3 = 30;
    }
}

int main()
{

    printf("Num1    :   %d\n", num1);
    // printf("Num1    :   %d\n", ::num1);

    printf("Num2    :   %d\n", na::num2);
    // printf("Num2    :   %d\n", ::na::num2);

    printf("Num2    :   %d\n", na::nb::num3);
    // printf("Num2    :   %d\n", ::na::nb::num3);

    return 0;
}