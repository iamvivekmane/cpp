#include <iostream>
using namespace std;

// Defined a macro size which is 3
#define SIZE 3

class Array
{
private:
    int arr[SIZE];

public:
    // Parameterless constructor
    Array(void)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = 0;
        }
    }
    // Function to accept record from the user
    void accept_record(void)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Element      :   ";
            cin >> this->arr[i];
        }
    }
    // Function to return element at the passed index
    int get_element(int index)
    {
        return this->arr[index];
    }

    // Function to set element at the passed index with the passed element value
    void set_element(int index, int element)
    {
        this->arr[index] = element;
    }

    // Function to print the record
    void print_record(void)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Element      :   " << this->arr[i] << endl;
        }
    }
};

void accept_record(Array *ptr)
{
    int element;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Element      :   ";
        cin >> element;
        ptr->set_element(i, element);
    }
}

void print_record(Array *ptr)
{
    int element;
    cout << "-----------------" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        element = ptr->get_element(i);
        cout << "Element      :   " << element << endl;
    }
}

int main()
{

    //  // Creating object of Array class
    // Array a1;

    // // Global method to accept record from the user
    // accept_record(&a1);

    // // Global method to print record
    //  print_record(&a1);

    // ---------------------------------------------------------------------

    // // Creating object of Array class
    // Array a1;
    // int element;
    // // For loop to initialize elements with member function set_element
    // for (int i = 0; i < SIZE; i++)
    // {
    //     cout << "Element      :   ";
    //     cin >> element;
    //     a1.set_element(i, element);
    // };

    // // For loop to print elements with member function get_element
    // cout << "-----------------" << endl;
    // for (int i = 0; i < SIZE; i++)
    // {
    //     cout << "Element      :   " << a1.get_element(i) << endl;
    // };

    // ----------------------------------------------------------------------

    // Creating object of Array class
    // Array a1;
    // // Initializing elements manually with member function set_element
    // a1.set_element(0, 10);
    // a1.set_element(1, 20);
    // a1.set_element(2, 30);

    // // Getting element value with member function get_element and printing them
    // int element;
    // element = a1.get_element(0);
    // cout << "Element  :   " << element << endl;
    // element = a1.get_element(1);
    // cout << "Element  :   " << element << endl;
    // element = a1.get_element(2);
    // cout << "Element  :   " << element << endl;

    return 0;
}