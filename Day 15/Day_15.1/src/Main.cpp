#include <iostream>
#include <string>
using namespace std;
class IllegalArgumentException
{
private:
    string message;

public:
    IllegalArgumentException(string message = "Illegal argument exception") : message(message) {}
    string get_message(void) throw()
    {
        return this->message;
    }
};
class ArrayIndexOutOfBoundException
{
private:
    string message;

public:
    ArrayIndexOutOfBoundException(string message = "Array index out of bound exception") : message(message) {}
    string get_message(void) throw()
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
    Array(void) throw()
    {
        this->size = 0;
        this->arr = NULL;
    }
    Array(int size) throw()
    {
        this->size = size;
        this->arr = new int[size];
    }
    void set_element(const int index, const int element) throw(ArrayIndexOutOfBoundException)
    {
        if (index < 0 || index > size)
        {
            throw ArrayIndexOutOfBoundException("Invalid index");
        }

        this->arr[index] = element;
    }
    int get_element(int index) const throw(ArrayIndexOutOfBoundException)
    {
        if (index < 0 || index > size)
        {
            throw ArrayIndexOutOfBoundException("Invalid index");
        }

        return this->arr[index];
    }
    void set_size(int size) throw(ArrayIndexOutOfBoundException, bad_alloc)
    {
        if (size < 0)
        {
            throw IllegalArgumentException("Invalid size");
        }
        this->~Array();
        if (size == 0)
        {
            this->size = 0;
        }
        else
        {
            this->size = size;
            this->arr = new int[size];
        }
    }
    ~Array(void) throw()
    {
        if (this->arr != NULL)
        {
            delete[] this->arr;
            this->arr = NULL;
        }
    }
};
int main()
{
    Array a1(3);
    a1.set_size(4);
    a1.set_element(0, 100);
    a1.set_element(1, 200);
    a1.set_element(2, 300);
    a1.set_element(3, 400);
    int element;
    element = a1.get_element(0);
    cout << "Element  :   " << element << endl;
    element = a1.get_element(1);
    cout << "Element  :   " << element << endl;
    element = a1.get_element(2);
    cout << "Element  :   " << element << endl;
    element = a1.get_element(3);
    cout << "Element  :   " << element << endl;
    return 0;
}