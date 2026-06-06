#include <iostream>
#include <cstdlib>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void)
    {
        cout << "Complex(void)" << endl;
        this->real = 0;
        this->imaginary = 0;
    }
    void accept_record(void)
    {
        cout << "Real number     :   ";
        cin >> this->real;
        cout << "Imaginary number:   ";
        cin >> this->imaginary;
    }
    void print_record(void)
    {
        cout << "--------------------" << endl;
        cout << "Real number     :   " << this->real << endl;
        cout << "Imaginary number:   " << this->imaginary << endl;
    }
    ~Complex(void)
    {
        cout << "~Complex(void)" << endl;
    }
};

int main()
{
    // // typedef unsigned long int size_t;
    // // void *malloc(size_t size);
    // int *ptr = (int *)malloc(sizeof(int));
    // if (ptr != NULL)
    // {
    //     *ptr = 125;                              // Dereferencing the value at ptr pointer
    //     cout << "Value    :   " << *ptr << endl; // Printing the value at ptr pointer
    //     free(ptr);                               // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL;                              // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)malloc(3 * sizeof(int));
    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   ";
    //         cin >> ptr[i];
    //     }
    //     cout << "-------------------" << endl;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   " << ptr[i] << endl;
    //     }
    //     free(ptr);  // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL; // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)calloc(1, sizeof(int));
    // if (ptr != NULL)
    // {
    //     *ptr = 125;                              // Dereferencing the value at ptr pointer
    //     cout << "Value    :   " << *ptr << endl; // Printing the value at ptr pointer
    //     free(ptr);                               // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL;                              // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = (int *)calloc(3, sizeof(int));
    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   ";
    //         cin >> ptr[i];
    //     }
    //     cout << "-------------------" << endl;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Element " << i + 1 << "     :   " << ptr[i] << endl;
    //     }
    //     free(ptr);  // Deallocating the memory allocated to the *ptr pointer
    //     ptr = NULL; // ptr is set to NULL to avoid dangling pointer
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int **ptr = (int **)calloc(4, sizeof(int *));
    // if (ptr != NULL)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         ptr[i] = (int *)calloc(3, sizeof(int));
    //     }
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Array " << i + 1 << endl;
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << "Element " << j + 1 << "  :   ";
    //             cin >> ptr[i][j];
    //         }
    //     }

    //     cout << "----------------------" << endl;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Array " << i + 1 << endl;
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << "Element   :   " << ptr[i][j] << endl;
    //             ;
    //         }
    //     }
    // }
    // else
    // {
    //     cout << "Bad memory allocation" << endl;
    // }
    // // -------------------------------------------

    // int *ptr = NULL;
    // ptr = (int *)calloc(3, sizeof(int));
    // if (ptr != NULL)
    // {
    //     cout << "ptr  :   " << ptr << endl;
    //     ptr[0] = 10;
    //     ptr[1] = 20;
    //     ptr[2] = 30;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << ptr[i] << endl;
    //     }
    //     if (ptr != NULL)
    //     {
    //         cout << "ptr  :   " << ptr << endl;
    //         realloc(ptr, 5 * sizeof(int));
    //         ptr[3] = 40;
    //         ptr[4] = 50;
    //         for (int i = 0; i < 5; i++)
    //         {
    //             cout << ptr[i] << endl;
    //         }
    //     }
    // }
    // // -------------------------------------------

    Complex *ptr = (Complex *)malloc(sizeof(Complex));
    ptr->accept_record();
    ptr->print_record();
    free(ptr);
    return 0;
}