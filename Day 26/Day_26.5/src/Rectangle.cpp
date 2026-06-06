#include <iostream>
using namespace std;
#include "../include/Rectangle.h"

Rectangle::Rectangle(void)
{
    this->length = 0;
    this->breadth = 0;
}
void Rectangle::accept_record(void)
{
    cout << "Length   :   ";
    cin >> this->length;
    cout << "Breadth  :   ";
    cin >> this->breadth;
}
void Rectangle::calculate_area(void)
{
    Shape::area = this->length * this->breadth;
}
void Rectangle::print_record(void)
{
    cout << "Area     :   " << this->area << endl;
}
