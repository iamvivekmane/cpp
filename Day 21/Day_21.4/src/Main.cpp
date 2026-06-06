#include <iostream>
using namespace std;
template <class T>
void swap_object(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    // swap_object(a, b);
    swap_object<int>(a, b);
    cout << "a    :   " << a << endl;
    cout << "b    :   " << b << endl;
    return 0;
}
