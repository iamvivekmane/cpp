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
class Array
{
private:
    int size;
    int *arr;

public:
    Array(void) : size(0), arr(NULL)
    {
    }
    Array(int size) : size(size), arr(new int[this->size])
    {
    }
    Array(const Array &other) : size(other.size), arr(new int[this->size])
    {
        memcpy(this->arr, other.arr, this->size * sizeof(int));
    }
    Array &operator=(const Array &other)
    {
        this->~Array();
        this->size = other.size;
        this->arr = new int[this->size];
        memcpy(this->arr, other.arr, this->size * sizeof(int));
        return *this;
    }
    // Array *const this = &a1;
    int &operator[](int index) throw(ArrayIndexOutOfBoundsException)
    {
        if (index >= 0 && index < size)
            return this->arr[index];
        throw ArrayIndexOutOfBoundsException("Invalid Index");
    }
    // bool grow( int size );
    // bool shrink( int size );
    ~Array(void)
    {
        if (this->arr != NULL)
        {
            delete[] this->arr;
            this->arr = NULL;
        }
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