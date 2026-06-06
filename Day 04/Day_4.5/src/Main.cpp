#include <stdio.h>

namespace na
{
    int num1 = 10;

}

int num1 = 20;
int main()
{

    using namespace na;

    printf("Num1    :   %d\n", num1); // Error

    return 0;
}
int main1()
{

    int num1 = 30;
    using namespace na;

    printf("Num1    :   %d\n", num1);
    printf("Num1    :   %d\n", na::num1);

    return 0;
}
int main2()
{
    using namespace na;
    printf("Num1    :   %d\n", num1); // Error

    return 0;
}