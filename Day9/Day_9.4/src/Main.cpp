
#include <iostream>
using namespace std;

#define SIZE 3
class Array
{
private:
    int arr[SIZE];

public:
    Array(void)
    {
        for (int i = 0; i < SIZE; i++)
            this->arr[i] = 0;
    }
    void acceptRecord()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Enter element	:	";
            cin >> this->arr[i];
        }
    }
    int getElement(int i)
    {
        return this->arr[i];
    }
    void setElement(int i, int element)
    {
        this->arr[i] = element;
    }
    void printRecord()
    {
        for (int i = 0; i < SIZE; i++)
            cout << this->arr[i] << endl;
    }
};
void accept_record(Array *ptr)
{
    int element;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter element	:	";
        cin >> element;
        ptr->setElement(i, element);
    }
}
void print_record(Array *ptr)
{
    for (int i = 0; i < SIZE; i++)
        cout << ptr->getElement(i) << endl;
}
int main(void)
{
    Array a1;

    accept_record(&a1);

    print_record(&a1);

    return 0;
}
int main2(void)
{
    int element;
    Array a1;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter element	:	";
        cin >> element;
        a1.setElement(i, element);
    }

    for (int i = 0; i < SIZE; i++)
        cout << a1.getElement(i) << endl;

    return 0;
}

int main1(void)
{
    Array a1;
    // a1.acceptRecord( );
    a1.setElement(0, 10);
    a1.setElement(1, 20);
    a1.setElement(2, 30);

    // a1.printRecord( );
    int element = 0;
    element = a1.getElement(0);
    cout << element << endl;
    element = a1.getElement(1);
    cout << element << endl;
    element = a1.getElement(2);
    cout << element << endl;
    return 0;
}
