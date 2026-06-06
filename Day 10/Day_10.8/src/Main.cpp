#include <iostream>
using namespace std;
class Test
{
private:
    // Mutable data member is able to modify in a constant member function
    mutable int count;

public:
    // Constructor of test class
    Test(void) : count(0)
    {
    }
    // This function is used to count the no of times print() is called
    void print(void) const
    {
        ++count;
    }

    // This function is used to return the value of count
    int getCount(void)
    {
        return this->count;
    }
};
int main(void)
{
    // Creating 3 objects of Test class
    Test t1, t2, t3;
    // Calling print 2 times on t1 object
    t1.print();
    t1.print();

    // Calling print 3 times on t2 object
    t2.print();
    t2.print();
    t2.print();

    // Calling print 1 time on t3 object
    t3.print();

    // Printing the count of the print fuction called on the objects of Test class
    cout << "T1	:	" << t1.getCount() << endl;
    cout << "T2	:	" << t2.getCount() << endl;
    cout << "T3	:	" << t3.getCount() << endl;
    return 0;
}