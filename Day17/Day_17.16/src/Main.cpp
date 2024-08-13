#include <iostream>
using namespace std;
class Outer // Top level class
{
private:
    int num1;

public:
    class Inner // Inner class
    {
    private:
        int num2;

    public:
        Inner(void)
        {
            this->num2 = 20;
        }
        void print(void)
        {
            Outer out;
            cout << "Number 1  : " << out.num1 << endl;
            cout << "Number 2  : " << this->num2 << endl;
        }
    };

public:
    Outer(void)
    {
        this->num1 = 10;
    }
};
int main()
{
    Outer::Inner in;
    in.print();

    return 0;
}