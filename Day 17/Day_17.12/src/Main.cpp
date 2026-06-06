#include <iostream>
using namespace std;
void f1(void);
void f2(void);
int main()
{

    return 0;
}
void f1(void)
{
    friend void f1(); // Not ok
    int number = 10;
}
void f2(void)
{
    // cout << "Element  :   " << number << endl;
}