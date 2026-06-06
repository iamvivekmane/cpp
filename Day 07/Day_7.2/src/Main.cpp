#include <iostream>
using namespace std;

// Implementing method overloading
void print(int num)
{
    cout << "Int  :   " << num << endl;
}

void print(float num)
{
    cout << "Float  :   " << num << endl;
}

int main()
{
    // print(10);     // Int   :   10

    // print(10.5);   // Error call to print() is ambigious

    // print(10.5f);  // Float  :   10.5

    print(int(10.5)); // Type casted to int

    return 0;
}