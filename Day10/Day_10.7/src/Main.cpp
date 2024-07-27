#include <iostream>
using namespace std;
// This program demonstrate that we can define a friend function const
class A
{
public:
    // Declaring print function const
    void print(void) const;
};

class B
{
private:
    int number;

public:
    // Declaring constructor
    B(void);
    // Defining print function of A class as friend
    friend void A::print() const;
};

// Defining constructor of B class
B::B(void)
{
    this->number = 10;
}

// Defining print method of A class
void A::print() const
{
    // We can create object and access members of B class because we defined print function as friend
    B obj;
    cout << "Number   :   " << obj.number << endl;
}

int main()
{

    // Creating object and calling print function on that object
    A obj;
    obj.print();

    return 0;
}