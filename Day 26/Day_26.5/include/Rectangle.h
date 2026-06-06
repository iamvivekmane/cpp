#ifndef RECTANGLE_H__
#define RECTANGLE_H__

#include "../include/Shape.h"
class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(void);
    void accept_record(void);
    void calculate_area(void);
    void print_record(void);
};
#endif /*RECTANGLE_H__*/
