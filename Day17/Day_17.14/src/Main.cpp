#include <iostream>
using namespace std;
class Outer // Top level class
{
public:
    class Inner // Inner class
    {
    public:
        Inner(void)
        {
            cout << "Inner (void)" << endl;
        }
    };

public:
    Outer(void)
    {
        cout << "Outer(void)" << endl;
    }
};
int main()
{
    Outer out;
    Outer ::Inner in;

    return 0;
}