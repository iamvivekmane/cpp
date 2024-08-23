
#include <iostream>
#include <string>
using namespace std;

class ArrayIndexOutOfBoundsException
{
private:
    string message;

public:
    ArrayIndexOutOfBoundsException(string message = "Array Index Out Of Bounds Exception")
    {
        this->message = message;
    }
    string getMessage(void) const
    {
        return this->message;
    }
};
#define size 3
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
    // Array *const this = &a1;
    int &operator[](int index) throw(ArrayIndexOutOfBoundsException)
    {
        if (index >= 0 && index < size)
            return this->arr[index];
        throw ArrayIndexOutOfBoundsException("Invalid Index");
    }
};
int main(void)
{
    Array a1;
    a1[1] = 200;         // a1.operator[]( 1 ) = 200; //20 = 200
    int element = a1[1]; // element = a1.operator[ ]( 0 )
    cout << element << endl;
    return 0;
}
int main1(void)
{
    Array a1;
    int element = a1[1]; // element = a1.operator[ ]( 0 )
    cout << element << endl;
    return 0;
}
