#include <iostream>
using namespace std;
#include "../include/Shape.h"
void Shape::print_record(void) const
{
    cout << "Area     :   " << this->area << endl;
}

Shape::~Shape(void)
{
}