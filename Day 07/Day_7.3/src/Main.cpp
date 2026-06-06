#include <iostream>
using namespace std;

// Implementing method overloading
void print(int number)
{
    cout << "Int  :   " << number << endl;
}

void print(int *number)
{
    cout << "Int* :   " << number << endl;
}
int main()
{

    print(10);

    int number = 10;

    // print(&number); // Int*  :   0x61ff1c

    // #define NULL 0;

    // print(NULL); // Warning passing NULL pointer to non pointer argument

    // print(nullptr); // Int*     :   0

    // int *ptr = NULL; // OK

    int *ptr = nullptr; // Ok

    return 0;
}