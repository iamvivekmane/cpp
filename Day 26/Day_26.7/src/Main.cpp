#include <iostream>
#include <typeinfo>
using namespace std;
class Type
{
public:
    static string get_type(string ch)
    {
        if (ch == 'c')
        {
            return "char";
        }
        if (ch == 'i')
        {
            return "char";
        }
        if (ch == 'f')
        {
            return "char";
        }
        if (ch == 'd')
        {
            return "char";
        }
    }
};
int main()
{
    int number;
    const type_info &type = typeid(number);
    string type_name = type.name();

    return 0;
}