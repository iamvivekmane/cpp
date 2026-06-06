#include <iostream>
#include <cstring>
using namespace std;
#define size 3

class Array
{
private:
    int arr[size];

public:
    // Array *const this = &a1
    Array(void)
    {
        memset(this->arr, 0, size * sizeof(int));
    }

    // Array *const this = &a1
    void accept_record(void)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Element " << i + 1 << ":   ";
            cin >> this->arr[i];
        }
    }

    // Array *const this = &a1
    void print_record(void)
    {
        cout << "---------------------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Element " << i + 1 << ":   " << this->arr[i] << endl;
        }
    }
};
int main()
{
    Array a1;
    a1.accept_record(); // a1.print_record(&a1);
    a1.print_record();  // a1.print_record(&a1);

    return 0;
}