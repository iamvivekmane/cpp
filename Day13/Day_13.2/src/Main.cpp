#include <iostream>
using namespace std;

int main(void)
{
    try
    {
        int count = -3;
        int *ptr = new (nothrow) int[count];
        if (ptr == NULL)
            cout << "NULL" << endl;
    }
    catch (bad_alloc &ex)
    {
        cout << ex.what() << endl;
    }
    // Output :  NULL
    //   -----------------------------------------------------------------------
    return 0;
}

int main6(void)
{
    try
    {
        int count = -3;
        int *ptr = new int[count];
    }
    catch (bad_alloc &ex)
    {
        cout << ex.what() << endl;
    }
    // Output :  std::bad_alloc
    return 0;
}
int main5(void)
{
    char name[30];
    cout << "Name	:	";
    cin >> name;
    cout << "Name	:	" << name << endl;

    int *ptr = new (name) int(125); // Placement new operator
    // int *ptr = ( int* ) operator new(sizeof(int), name );

    cout << *ptr << endl;

    return 0;
}
int main4(void)
{
    int **ptr = new int *[4];
    for (int index = 0; index < 4; ++index)
        ptr[index] = new int[3];

    // TODO : Accept and Print

    for (int index = 0; index < 4; ++index)
        delete[] ptr[index];
    delete[] ptr;
    ptr = NULL;
    return 0;
}
int main3(void)
{
    int *ptr = new int[3];
    // int *ptr = ( int* )operator new[]( 3  * sizeof( int ) );

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    for (int index = 0; index < 3; ++index)
        cout << ptr[index] << endl;

    delete[] ptr;
    // operator delete[](ptr);

    ptr = NULL;
    return 0;
}
int main2(void)
{
    int *p1 = new int;

    int *p2 = new int();

    int *p3 = new int(3);

    return 0;
}
int main1(void)
{
    // Memory allocation and deallocation for single variable

    int *ptr = new int; // Memory allocation
    // int *ptr = (int*)operator new(sizeof(int));

    *ptr = 125;                            // dereferencing
    cout << "Value	:	" << *ptr << endl; // dereferencing

    delete ptr; // Memory deallocation
    // operator delete(ptr);

    ptr = NULL;
    return 0;
}