#include <iostream>
#include "../include/Math.h"
using namespace std;

// Function to take user choice
int menu_list()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "Enter choice   :     ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    int number1;
    int number2;

    // Taking user input for the two numbers
    cout << "Number1  :   ";
    cin >> number1;
    cout << "Number2  :   ";
    cin >> number2;

    while ((choice = menu_list()) != 0)
    {
        int result = 0;
        switch (choice)
        {
        case 1:
            result = addition(number1, number2);
            break;

        case 2:
            result = subtraction(number1, number2);
            break;

        case 3:
            result = multiplication(number1, number2);
            break;
        }
        cout << "Result   :   " << result << endl;
    }

    return 0;
}