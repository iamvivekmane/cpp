#include <iostream>
using namespace std;

#include "../include/ShapeFactory.h"
#include "../include/Shape.h"
#include "../include/Rectangle.h"
#include "../include/Circle.h"
Shape *shape_factory::get_instance(int choice)
{
    Shape *ptr = NULL;
    switch (choice)
    {
    case 1:
        ptr = new Rectangle(); // Upcasting
        break;
    case 2:
        ptr = new Circle(); // Upcasting
        break;
    }
    return ptr;
}
int shape_factory::menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Rectangle" << endl;
    cout << "2.Circle" << endl;
    cout << "Choice :   ";
    cin >> choice;
    return choice;
}