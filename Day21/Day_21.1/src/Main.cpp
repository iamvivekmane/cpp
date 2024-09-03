#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
    int size;
    T *arr;

public:
    // Declaring the member constructors, member functions, destructor
    Array(void);
    Array(int size);
    void accept_record(void);
    void print_record(void);
    ~Array(void);
};
// Defining the member constructors, member functions, destructor
template <class T>
Array<T>::Array(void)
{
    this->size = 0;
    this->arr = NULL;
}
template <class T>
Array<T>::Array(int size)
{
    this->size = size;
    arr = new T[this->size];
}
template <class T>
void Array<T>::accept_record(void)
{
    for (int i = 0; i < this->size; i++)
    {

        cout << "Element    :   ";
        cin >> arr[i];
    }
}
template <class T>
void Array<T>::print_record(void)
{
    cout << "-----------------" << endl;
    for (int i = 0; i < this->size; i++)
    {

        cout << "Element    :   " << arr[i] << endl;
    }
}
template <class T>
Array<T>::~Array(void)
{
    if (this->arr != NULL)
    {
        delete[] this->arr;
        this->arr = NULL;
    }
}
int main()
{
    Array<int> a1(3);
    a1.accept_record();
    a1.print_record();
    return 0;
}
