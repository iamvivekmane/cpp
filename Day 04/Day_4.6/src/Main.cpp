#include <stdio.h>

namespace na
{
    int num1 = 10;

}
namespace nb
{
    int num1 = 10;

}

int main()
{

    using namespace na;
    printf("Num1    :   %d\n", num1); // Ok

    using namespace nb;
    printf("Num1    :   %d\n", num1); // Error
    return 0;
}
