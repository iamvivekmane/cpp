#include <iostream>
using namespace std;
class Point
{
private:
    int x_position;
    int y_position;

public:
    Point(int x_position = 0, int y_position = 0)
    {
        this->x_position = x_position;
        this->y_position = y_position;
    }
    // Point *const this = &p1;
    // Point &other = p2;
    Point operator+(Point &other)
    {
        Point temp;
        temp.x_position = this->x_position + other.x_position;
        temp.y_position = this->y_position + other.y_position;
        return temp;
    }
    Point operator+(int element)
    {
        Point temp;
        temp.x_position = this->x_position + element;
        temp.y_position = this->y_position + element;
        return temp;
    }
    void print_record(void)
    {
        cout << "X position   :   " << this->x_position << endl;
        cout << "Y position   :   " << this->y_position << endl;
    }
};
int main(void)
{
    // Point p1(10, 20);
    // Point p2(10, 20);
    // Point p3;
    // p3 = p1 + p2; // p3 = p1.operator+(p2);
    // p3.print_record();
    // // ----------------------------------------------------------------------
    Point p1(10, 20);
    Point p2;
    p2 = p1 + 5;
    p2.print_record();
    return 0;
}
