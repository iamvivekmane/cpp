#include <iostream>
using namespace std;

void print(int number)
{
    cout << "Int   :   " << number << endl;
}

void print(int &number)
{
    cout << "Int&   :   " << &number << endl;
}
int main()
{
    print(10); // Int   :   10

    int x = 20;
    // print(x); //Error : call to print is ambigious

    return 0;
}