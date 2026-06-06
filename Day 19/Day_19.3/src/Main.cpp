#include <iostream>
#include <cstring>
using namespace std;
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
        this->arr = new int[this->size];
    }
    Array(const Array &other)
    {
        this->size = other.size;
        this->arr = new int[this->size];
        memcpy(this->arr, other.arr, this->size * sizeof(int));
    }
    ~Array(void)
    {
        if (this->arr != NULL)
        {
            delete[] this->arr;
            this->arr = NULL;
        }
    }
    friend istream &operator>>(istream &cin, Array &other)
    {
        for (int i = 0; i < other.size; i++)
        {
            cout << "Element  :   ";
            cin >> other.arr[i];
        }
        return cin;
    }
    friend ostream &operator<<(ostream &cin, Array &other)
    {
        for (int i = 0; i < other.size; i++)
        {
            cout << "Element  :   " << other.arr[i] << endl;
        }
        return cout;
    }
    Array &operator=(const Array &other)
    {
        this->~Array();
        this->size = other.size;
        this->arr = new int[this->size];
        memcpy(this->arr, other.arr, this->size * sizeof(int));
        return *this;
    }
};
int main()
{
    Array a1(3);
    Array a2(2);
    cin >> a1;
    cout << a1;
    a2 = a1;
    cout << a2;

    return 0;
}
