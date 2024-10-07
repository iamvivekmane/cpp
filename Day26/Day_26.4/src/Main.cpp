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
    virtual void accept_record(void) = 0;
    virtual void calculate_area(void) = 0;
    virtual void print_record(void)
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
    void accept_record(void) override
    {
        cout << "Length   :   ";
        cin >> this->length;
        cout << "Breadth  :   ";
        cin >> this->breadth;
    }
    void calculate_area(void) override
    {
        Shape::area = this->length * this->breadth;
    }
    void print_record(void) override
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
class Circle : public Shape
{
private:
    float area;
    float radius;

public:
    void accept_record(void) override
    {
        cout << "Radius   :   ";
        cin >> this->radius;
    }
    void calculate_area(void) override
    {
        this->area = Math::PI * Math::pow(this->radius, 2);
    }
    void print_record(void) override
    {
        cout << "Area     :   " << this->area << endl;
    }
};

class shape_factory
{
public:
    static Shape *get_instance(int choice)
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
    static int menu_list(void)
    {
        int choice;
        cout << "0.Exit" << endl;
        cout << "1.Rectangle" << endl;
        cout << "2.Circle" << endl;
        cout << "Choice :   ";
        cin >> choice;
        return choice;
    }
};
int main()
{
    int choice;
    while ((choice = shape_factory::menu_list()) != 0)
    {
        Shape *ptr = shape_factory::get_instance(choice);
        if (ptr != NULL)
        {
            ptr->accept_record();
            ptr->calculate_area();
            ptr->print_record();
            delete ptr;
        }
    }
    return 0;
}