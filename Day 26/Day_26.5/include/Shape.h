#ifndef SHAPE_H__
#define SHAPE_H__
class Shape
{
protected:
    float area;

public:
    Shape(void)
    {
        this->area = 0;
    }
    virtual void accept_record(void) = 0;
    virtual void calculate_area(void) = 0;
    virtual void print_record(void) const;
    virtual ~Shape();
};
#endif /*SHAPE_H__*/
