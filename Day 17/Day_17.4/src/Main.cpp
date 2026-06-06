#include <iostream>
using namespace std;
class Outer // Top level class
{
    class Inner // Nested class
    {
    };
    friend int main(void);
};
int main()
{
    Outer out;
    Outer::Inner in;

    return 0;
}