#include <iostream>
using namespace std;

int main()
{
    // int *ptr = NULL;
    // //Memory leakage has occured of below 8 bytes memory
    // ptr = new int[2];
    // ptr[0] = 10;
    // ptr[1] = 20;
    // ptr = new int[3];
    // ptr[0] = 10;
    // ptr[1] = 20;
    // ptr[2] = 30;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Element  :   " << ptr[i] << endl;
    // }
    // delete[] ptr;
    // ptr = NULL;
    // // ------------------------------------------------------------------------------------

    int *ptr1 = new int[3];
    ptr1[0] = 10;
    ptr1[1] = 20;
    ptr1[2] = 30;
    int *ptr2 = ptr1;
    for (int i = 0; i < 3; i++)
    {
        cout << "Element  :   " << ptr2[i] << endl;
    }
    delete[] ptr2;
    ptr2 = NULL;

    delete[] ptr1; // ptr1 is a dangling pointer //double free detected
    // The pointer which are trying to free was not allocated
    ptr1 = NULL;
    return 0;
}