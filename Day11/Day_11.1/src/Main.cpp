#include <iostream>
using namespace std;

// class Test
// {
// public:
//     char &ch;
//     Test(char &ch2) : ch(ch2) {}
// };

// int &y = b
// void swap(int &x, int &y) // void swap( int *const x, int *const y )
// {
//     int temp = x; // int temp = *x;
//     x = y;        //*x = *y;
//     y = temp;     //*y = temp;
// }
int main()
{
    // int num1 = 10;
    // int &num2 = num1;
    // // int &num2 = 10 ; //Not ok

    // // num1 => Referent variable
    // // num2=> Reference variable

    // cout << "Number1   :   " << &num1 << endl;
    // cout << "Number2   :   " << &num2 << endl;
    // // -----------------------------------------------------------------------------------

    // int num1 = 10;
    // int &num2 = num1;
    // ++num1;
    // ++num2;
    // cout << "Number1   :   " << num1 << endl;
    // cout << "Number2   :   " << num2 << endl;
    // // -----------------------------------------------------------------------------------

    // int num1 = 10;
    // int &num2 = num1;
    // const int &num3 = num1;

    // ++num1;
    // ++num2;
    // // ++num3; // Not ok

    // // num1 => Referent variable
    // // num2=> Reference variable

    // cout << "Number1   :   " << num1 << endl;
    // cout << "Number2   :   " << num2 << endl;
    // cout << "Number3   :   " << num3 << endl;

    // // -----------------------------------------------------------------------------------

    // int num1 = 10;
    // int &num2 = num1;
    // int &num3 = num2;

    // cout << "Number1   :   " << num1 << endl;
    // cout << "Number2   :   " << num2 << endl;
    // cout << "Number3   :   " << num3 << endl;

    // // -----------------------------------------------------------------------------------

    // int num1 = 10;
    //     int num2 = 20;
    //     int &num3 = num1;
    //     num3 = num2;
    //     ++num3;

    //     cout << "Number1   :   " << num1 << endl;
    //     cout << "Number3   :   " << num3 << endl;
    //     cout << "Number2   :   " << num2 << endl;
    // // -----------------------------------------------------------------------------------

    //     char ch3 = 'A';
    //     Test t(ch3);
    //     size_t size = sizeof(t);
    //     cout << "Size	:	" << size << endl;
    // // -----------------------------------------------------------------------------------

    // int number = 10;
    // int *p1 = &number;
    // int *&p2 = p1;

    // cout << &p1 << endl;
    // cout << &p2 << endl;

    // // -----------------------------------------------------------------------------------

    // int arr1[3] = {10, 20, 30};
    // int(&arr2)[3] = arr1;

    // for (int index = 0; index < 3; ++index)
    //     cout << arr2[index] << endl;
    // // -----------------------------------------------------------------------------------

    // int a = 10;
    // int b = 20;
    // swap(a, b);
    // cout << "a	:	" << a << endl;
    // cout << "b	:	" << b << endl;
    // // -----------------------------------------------------------------------------------
    return 0;
}