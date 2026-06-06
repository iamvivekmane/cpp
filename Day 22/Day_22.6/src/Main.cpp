#include <iostream>
using namespace std;
class Singleton
{
private:
    int number;

private:
    Singleton(int number = 0)
    {
        cout << "Inside ctor" << endl;
        this->number = number;
    }

public:
    int get_number(void) const
    {
        return this->number;
    }
    void set_number(int number)
    {
        this->number = number;
    }
    static Singleton &get_instance(int number = 0) // Factory method
    {
        static Singleton instance(number);
        return instance;
    }
};
int main()
{
    Singleton &s1 = Singleton::get_instance();
    // s1.set_number(125);
    cout << "Number   :   " << s1.get_number() << endl;
    return 0;
}