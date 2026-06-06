#include <iostream>
using namespace std;
#define size 3

class ArrayIndexOutOfBoundException
{
private:
    string message;

public:
    ArrayIndexOutOfBoundException(string message = "Array index out of bound exception")
    {
        this->message = message;
    }
    string get_message()
    {
        return this->message;
    }
};
class Array
{
private:
    int arr[size];

public:
    Array(void)
    {
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
    }
    int &operator[](int index) throw(ArrayIndexOutOfBoundException)
    {
        if (index > 0 && index < size)
        {
            return this->arr[index];
        }
        throw ArrayIndexOutOfBoundException("Invalid index");
    }
};
int main()
{

    // Array a1;
    // int element = a1[9];
    // cout << "Element  :   " << element << endl;
    // // -----------------------------------------------------
    Array a1;
    a1[1] = 100;
    cout << "Element  :   " << a1[1] << endl;

    return 0;
}