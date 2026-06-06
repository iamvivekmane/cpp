#include <iostream>
using namespace std;

int main()
{
    // // Memory allocation and deallocation for single variable
    // int *ptr = new int; // Memory allocation
    // // int *ptr = (int *)operator new(sizeof(int)); // Internal working of new operator
    // *ptr = 10;                               // Dereferencing
    // cout << "Value    :   " << *ptr << endl; // Dereferencing
    // delete ptr;                              // Memory deallocation
    // // operator delete(ptr); // Internal working of delete operator
    // ptr = NULL;
    // // --------------------------------------------------------------------------------------

    // int *p1 = new int; // It will store garbage value
    // int *p2 = new int(); // It will store 0
    // int *p3 = new int(3); // It will initialize variable with 3
    // // --------------------------------------------------------------------------------------

    // // Memory allocation for an array
    // int *ptr = new int[3];
    // ptr[0] = 10;
    // ptr[1] = 20;
    // ptr[2] = 30;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Element " << i + 1 << "    :   " << ptr[i] << endl;
    // }
    // delete[] ptr;
    // // operator delete[](ptr); Internal working of delete operator
    // ptr = NULL;
    // // --------------------------------------------------------------------------------------

    // // Allocating memory for multidimensional array
    // int **ptr = new int *[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     ptr[i] = new int;
    // }
    // // Storing values in the multidimensional array
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Array " << i + 1 << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Element " << j + 1 << ": ";
    //         cin >> ptr[i][j];
    //     }
    // }
    // // Printing values in the multidimensional array
    // cout << "-----------------------" << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Array " << i + 1 << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Element" << j + 1 << " :   " << ptr[i][j] << endl;
    //     }
    // }
    // // Deallocating memory for multidimensional array
    // for (int i = 0; i < 4; i++)
    // {
    //     delete[] ptr[i];
    // }
    // delete ptr;
    // ptr = NULL;
    // // --------------------------------------------------------------------------------------

    // char name[30];
    // cout << "Name   :   ";
    // cin >> name;
    // cout << "Name   :   " << name << endl;
    // int *ptr = new (name) int(125); // Reallocating the preallocated memory to the character array name
    // cout << "Value  :   " << *ptr << endl;
    // // --------------------------------------------------------------------------------------

    // try
    // {
    //     int count = -3;
    //     int *ptr = new int[count];
    // }
    // catch (bad_alloc ex)
    // {
    //     cout << ex.what() << endl;
    // }
    // // Output - std::bad_alloc
    // // --------------------------------------------------------------------------------------

    // try
    // {
    //     int count = -3;
    //     int *ptr = new (nothrow) int[count];
    //     if (ptr == NULL)
    //     {
    //         cout << "NULL" << endl;
    //     }
    // }
    // catch (bad_alloc &ex)
    // {
    //     cout << ex.what() << endl;
    // }
    // // Output - NULL
    // // --------------------------------------------------------------------------------------

    return 0;
}