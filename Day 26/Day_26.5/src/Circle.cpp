#include <iostream>
using namespace std;
#include "../include/Circle.h"
void Circle::accept_record(void)
{
    cout << "Radius   :   ";
    cin >> this->radius;
}
void Circle::calculate_area(void)
{
    this->area = Math::PI * Math::pow(this->radius, 2);
}
void Circle::print_record(void)
{
    cout << "Area     :   " << this->area << endl;
}