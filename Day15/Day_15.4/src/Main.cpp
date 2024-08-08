#include <iostream>
#include <cstring>
using namespace std;
class Array
{
private:
    int size;
    int *arr;

public:
    Array(void) : size(0), arr(NULL) {}
    Array(int size)
    {
        this->size = size;
        this->arr = new int[size];
    }
    // Array(const Array &other)
    // {
    //     // Step 1: Copy the size
    //     this->size = other.size;
    //     // Step 2: Allocate the new resources
    //     this->arr = new int[this->size];
    //     // Step 3: Copy the contents
    //     memcpy(this->arr, other.arr, this->size * sizeof(int));
    //     // for (int i = 0; i < this->size; i++)
    //     // {
    //     //     this->arr[i] = other.arr[i];
    //     // }
    // }
    Array(const Array &other) : size(other.size), arr(new int[this->size])
    {
        memcpy(this->arr, other.arr, this->size * sizeof(int));
    }
    void accept_record(void)
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << "Element :    ";
            cin >> this->arr[i];
        }
    }
    void print_record(void)
    {
        cout << "----------------" << endl;
        for (int i = 0; i < this->size; i++)
        {
            cout << "Element :    " << this->arr[i] << endl;
        }
    }
    ~Array(void)
    {
        if (arr != NULL)
        {
            delete[] this->arr;
            this->arr = NULL;
        }
    }
};
int main()
{
    Array a1(3);
    a1.accept_record();
    Array a2 = a1;
    a2.print_record();

    return 0;
}