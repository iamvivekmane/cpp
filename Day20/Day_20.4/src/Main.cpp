#include <iostream>
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
        this->arr = new int[size];
    }
    void accept_record(void)
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << "Element  :   ";
            cin >> this->arr[i];
        }
    }
    void print_record(void)
    {
        cout << "-------------------------" << endl;
        for (int i = 0; i < this->size; i++)
        {
            cout << "Element  :   " << this->arr[i] << endl;
        }
    }
    ~Array(void)
    {
        if (this->arr != NULL)
        {
            delete this->arr;
            arr = NULL;
        }
    }
};

class Auto_pointer
{
private:
    Array *ptr;

public:
    Auto_pointer(Array *ptr)
    {
        this->ptr = ptr;
    }
    ~Auto_pointer(void)
    {
        delete this->ptr;
    }
    Array *operator->()
    {
        return this->ptr;
    }
};
int main()
{
    // Array a1(3);
    // a1.accept_record();
    // a1.print_record();
    // // ---------------------------------------------------'

    // Array *ptr = new Array(2);
    // ptr->accept_record();
    // ptr->print_record();
    // delete ptr;
    // // ---------------------------------------------------

    // Array a1(3);
    // a1.accept_record();
    // a1.print_record();
    // // ---------------------------------------------------

    // Auto_pointer obj(new Array(3));
    // obj->accept_record(); // obj.operator->()->accept_record();
    // obj->print_record();  // obj.operator->()->print_record();
    // // ---------------------------------------------------

    auto_ptr<Array> obj(new Array(5)); // deprecated in C++11 and completely removed in C++17
    obj->accept_record();
    obj->print_record();
    return 0;
}