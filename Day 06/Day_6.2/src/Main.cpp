#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float number;
    cout << "Number   :   ";
    cin >> number;

    // This fuction is used to set the precision of the floating-point number to 2 decimal places.
    cout << "Number   :   " << setprecision(2) << number << endl;
    return 0;
}