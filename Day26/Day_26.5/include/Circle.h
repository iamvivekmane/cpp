#ifndef CIRCLE_H__
#define CIRCLE_H__
#include "../include/Shape.h"
#include "../include/Math.h"
class Circle : public Shape
{
private:
    float area;
    float radius;

public:
    void accept_record(void);
    void calculate_area(void);
    void print_record(void);
};
#endif /*CIRCLE_H__*/
