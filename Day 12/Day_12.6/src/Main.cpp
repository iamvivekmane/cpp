#include <iostream>
using namespace std;
int num1 = 10;
int num2 = 20;

void print(int &num1 = num1, int num2 = num2, int num3 = 30)
{
    cout << "Number 1 :   " << num1 << endl;
    cout << "Number 2 :   " << num2 << endl;
    cout << "Number 3 :   " << num3 << endl;
};
int main()
{
    int number = 100;
    print(number);
    print();

    return 0;
}