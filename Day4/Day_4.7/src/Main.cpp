#include <stdio.h>

namespace na
{
    int num1 = 10;

    void print(void)
    {
        printf("num1    :   %d\n", num1);
    }
    struct Point
    {
        int xPos;
        int yPos;
    };
    namespace nb
    {
        int num2 = 20;
    }

}

int main()
{

    na::print();

    na::Point p1 = {10, 20};

    printf("num2    :   %d\n", na::nb::num2);
    return 0;
}
