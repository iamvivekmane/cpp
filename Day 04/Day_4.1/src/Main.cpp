#include <stdio.h>

int num1 = 10;
int main()
{

    int num1 = 20;
    printf("Num1    :   %d\n", ::num1); // 20
    printf("Num1    :   %d\n", num1);   // 10
    {
        int num1 = 30;
        printf("Num1    :   %d\n", ::num1); // 10
        printf("Num1    :   %d\n", num1);   // 30
    }

    return 0;
}