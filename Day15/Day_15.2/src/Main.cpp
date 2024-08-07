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
    int getSize(void)
    {
        return this->size;
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

void accept_record(Array &a1)
{
    for (int i = 0; i < a1.getSize(); i++)
    {
        int element;
        cout << "Element  :   ";
        cin >> element;
        a1.set_element(i, element);
    }
}
void print_record(Array &a1)
{
    cout << "------------------------------" << endl;
    for (int i = 0; i < a1.getSize(); i++)
    {
        cout << "Element  :   " << a1.get_element(i) << endl;
    }
}
enum IOOPERATION
{
    EXIT,
    ACCEPT_RECORD,
    PRINT_RECORD // Enum constants / Enumerators
    // EXIT = 0, ACCEPT_RECORD = 1, PRINT_RECORD = 2
};

IOOPERATION menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Accept record" << endl;
    cout << "2.Print record" << endl;
    cout << "Choice   :   ";
    cin >> choice;
    return IOOPERATION(choice);
}
int main()
{
    // Array a1(3);
    // accept_record(a1);
    // print_record(a1);
    // a1.set_size(5);
    // accept_record(a1);
    // print_record(a1);
    // // --------------------------------------------------

    // Array a1;
    // a1.set_size(5);
    // int choice;
    // while ((choice = menu_list()) != 0)
    // {
    //     switch (choice)
    //     {
    //     case ACCEPT_RECORD:
    //         accept_record(a1);
    //         break;

    //     case PRINT_RECORD:
    //         print_record(a1);
    //         break;
    //     }
    // }
    // // --------------------------------------------------

    try
    {
        try
        {
            Array a1;
            a1.set_size(5);
            int choice;
            while ((choice = menu_list()) != 0)
            {
                switch (choice)
                {
                case ACCEPT_RECORD:
                    accept_record(a1);
                    break;

                case PRINT_RECORD:
                    print_record(a1);
                    break;
                }
            }
        }
        catch (ArrayIndexOutOfBoundException &ex)
        {
            cout << ex.get_message() << endl;
        }
    }
    catch (IllegalArgumentException &ex)
    {
        cout << ex.get_message() << endl;
    }
    catch (bad_alloc &ex)
    {
        cout << ex.what() << endl;
    }
    catch (...)
    {
        cout << "Exception occured" << endl;
    }
    return 0;
}