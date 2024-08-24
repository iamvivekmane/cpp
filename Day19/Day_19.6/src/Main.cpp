#include <iostream>
#include <cstring>
using namespace std;
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
    int size;
    int *arr;

public:
    Array(void)
    {
        this->size = 0;
        this->arr = NULL;
    }
    Array(int size)
    {
        this->size = size;
        this->arr = new int[size];
    }
    Array(const Array &other)
    {
        this->size = other.size;
        this->arr = NULL;
        memcpy(this->arr, other.arr, size * sizeof(int));
    }
    ~Array()
    {
        if (this->arr != NULL)
        {
            delete[] this->arr;
            this->arr = NULL;
        }
    }
    Array &operator=(const Array &other)
    {
        this->~Array();
        this->size = other.size;
        this->arr = new int[this->size];
        memcpy(this->arr, other.arr, size * sizeof(int));
        return *this;
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