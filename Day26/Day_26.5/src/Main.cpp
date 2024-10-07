#include "../include/ShapeFactory.h"
using namespace std;
int main()
{
    int choice;
    while ((choice = shape_factory::menu_list()) != 0)
    {
        Shape *ptr = shape_factory::get_instance(choice);
        if (ptr != 0)
        {
            ptr->accept_record();
            ptr->calculate_area();
            ptr->print_record();
            delete ptr;
        }
    }
    return 0;
}