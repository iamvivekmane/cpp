#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // // typedef unsigned long int size_t;
    // // void *malloc(size_t size);
    // int *ptr = (int *)malloc(sizeof(int));
    // if (ptr != NULL)
    // {
    //     *ptr = 125;                              // Dereferencing the value at ptr pointer
    //     cout << "Value    :   " << *ptr << endl; // Printing the value at ptr pointer
    //     free(ptr);                               // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL;                              // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)malloc(3 * sizeof(int));
    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   ";
    //         cin >> ptr[i];
    //     }
    //     cout << "-------------------" << endl;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   " << ptr[i] << endl;
    //     }
    //     free(ptr);  // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL; // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)calloc(1, sizeof(int));
    // if (ptr != NULL)
    // {
    //     *ptr = 125;                              // Dereferencing the value at ptr pointer
    //     cout << "Value    :   " << *ptr << endl; // Printing the value at ptr pointer
    //     free(ptr);                               // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL;                              // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)calloc(3, sizeof(int));
    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   ";
    //         cin >> ptr[i];
    //     }
    //     cout << "-------------------" << endl;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   " << ptr[i] << endl;
    //     }
    //     free(ptr);  // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL; // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    return 0;
}