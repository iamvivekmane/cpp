#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;

public:
    // Test *const this = &t
    Test(void) : num1(10), num2(20)
    {
        ++this->num1;
        ++this->num2;
    }
    // Test *const this = &t
    void showRecord(void)
    {
        ++this->num1;
        ++this->num2;

        cout << "Num1	:	" << this->num1 << endl;
        cout << "Num2	:	" << this->num2 << endl;
    }
    // const Test *const this = &t
    void printRecord(void) const
    {
        //++ this->num1;  //Not OK
        //++ this->num2;	//Not OK

        cout << "Num1	:	" << this->num1 << endl;
        cout << "Num2	:	" << this->num2 << endl;
    }
};
// int main( void )const //Error non-member function cannot have 'const' qualifier
int main(void)
{
    Test t;
    t.showRecord();
    t.printRecord();
    return 0;
}