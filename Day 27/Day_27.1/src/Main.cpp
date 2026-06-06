#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;
class Type
{
public:
    static string get_type(string ch)
    {
        if (ch == "c")
        {
            return "char";
        }
        if (ch == "i")
        {
            return "int";
        }
        if (ch == "f")
        {
            return "float";
        }
        if (ch == "d")
        {
            return "double";
        }
        else
        {
            return "";
        }
    }
};
int main()
{
    // int number;
    // const type_info &type = typeid(number);
    // const char *type_name = type.name();
    // cout << "Type :   " << Type::get_type(type_name) << endl;
    // // ---------------------------------------------------------------------------

    // int number;
    // const type_info &type = typeid(number);
    // string type_name = type.name();
    // cout << "Type :   " << Type::get_type(type_name) << endl;
    // // ---------------------------------------------------------------------------

    // int number;
    // const type_info &type = typeid(number);
    // cout << "Type :   " << Type::get_type(type_name) << endl;
    // // ---------------------------------------------------------------------------

    int number;
    cout << "Type :   " << typeid(number).name() << endl;

    return 0;
}