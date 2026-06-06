#include <iostream>
using namespace std;
int num1 = 10;        // Program scope
static int num2 = 20; // File scope
namespace kdac
{
    int num3 = 30; // Namespace scope
    class Test
    {
        // Data member
        int num4 = 40; // Class scope
    };
}
int main()
{
    // Function declaration/Prototype
    int sum(int num1 = 10, int num2 = 20); // Prototype scope

    // Local variable
    int num5 = 50;
    if (true)
    {
        int num1 = 10;
    }
    else
    {
    }

    return 0;
}
