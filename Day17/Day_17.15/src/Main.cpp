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
        friend class Outer;
    };

public:
    Outer(void)
    {
        this->num1 = 10;
    }
    void print(void)
    {
        cout << "Number 1  : " << this->num1 << endl;
        Inner in;
        cout << "Number 2  : " << in.num2 << endl;
    }
};
int main()
{
    Outer out;
    out.print();

    return 0;
}