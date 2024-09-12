#include <iostream>
using namespace std;
class
{
public:
    void show_record(void)
    {
        cout << "void show_record(void)" << endl;
    }
    static void display_record(void)
    {
        cout << "static void display_record(void)" << endl;
    }
} t1;
int main()
{
    t1.show_record();
    t1.display_record();
    return 0;
}