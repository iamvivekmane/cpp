#include <stdio.h>

namespace na
{
    int num1 = 10;

}
using namespace na;

void show_record(void)
{
    printf("Num1   :   %d\n", na::num1);
    printf("Num1    :   %d\n", num1);
}
void print_record(void)
{
    printf("Num1    :   %d\n", na::num1);
    printf("Num1    :   %d\n", num1);
}
void display_record(void)
{
    printf("Num1    :   %d\n", na::num1);
    printf("Num1    :   %d\n", num1);
}

int main()
{

    ::show_record();
    ::print_record();
    ::display_record();
    return 0;
}
