#include <stdio.h>

namespace na
{
    int num1 = 10;
    int num3 = 20;
}

namespace na
{
    int num2 = 30;
    int num3 = 40;
}

int main()
{

    int num1 = 20;
    printf("Num1    :   %d\n", na::num1);
    printf("Num2    :   %d\n", na::num2);

    printf("Num3    :   %d\n", na::num3); // Error

    return 0;
}