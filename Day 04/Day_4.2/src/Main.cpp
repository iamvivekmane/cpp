#include <stdio.h>

int num1 = 10;

namespace na
{
    int num1 = 10;
    int num3 = 20;
}

namespace nb
{
    int num2 = 30;
    int num3 = 40;
}
int main()
{

    printf("Num1    :   %d\n", na::num1);
    printf("Num3    :   %d\n", na::num3);

    printf("Num2    :   %d\n", nb::num2);
    printf("Num3    :   %d\n", nb::num3);

    return 0;
}