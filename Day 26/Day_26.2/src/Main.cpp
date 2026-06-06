#include <iostream>
using namespace std;

class Shape
{
protected:
    float area;

public:
    Shape(void)
    {
        this->area = 0;
    }
    void print_record(void)
    {
        cout << "Area     :   " << this->area << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(void)
    {
        this->length = 0;
        this->breadth = 0;
    }
    void accept_record(void)
    {
        cout << "Length   :   ";
        cin >> this->length;
        cout << "Breadth  :   ";
        cin >> this->breadth;
    }
    void calculate_area(void)
    {
        Shape::area = this->length * this->breadth;
    }
    void print_record(void)
    {
        cout << "Area     :   " << this->area << endl;
    }
};
class Math
{
public:
    static const float PI;
    static float pow(float base, int index)
    {
        float result = 1;
        for (int i = 1; i <= index; i++)
        {
            result = result * base;
        }
        return result;
    }
};
const float Math::PI = 3.142;
class Circle
{
private:
    float area;
    float radius;

public:
    void accept_record(void)
    {
        cout << "Radius   :   ";
        cin >> this->radius;
    }
    void calculate_area(void)
    {
        this->area = Math::PI * Math::pow(this->radius, 2);
    }
    void print_record(void)
    {
        cout << "Area     :   " << this->area << endl;
    }
};
int main()
{
    //     Rectangle rect;
    //     rect.accept_record();
    //     rect.calculate_area();
    //     rect.print_record();
    // -------------------------------------------------

    Circle c;
    c.accept_record();
    c.calculate_area();
    c.print_record();
    return 0;
}