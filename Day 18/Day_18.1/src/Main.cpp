#include <iostream>
using namespace std;
class Point
{
private:
    int x_position;
    int y_position;

public:
    Point(int x_position = 0, int y_position = 0) : x_position(x_position), y_position(y_position) {}
    // Point *const this = &p1;
    // Point other = p2;
    // Point operator+(Point other)
    // {
    //     Point temp;
    //     temp.x_position = this->x_position + other.x_position;
    //     temp.y_position = this->y_position + other.y_position;
    //     return temp;
    // }
    Point operator-(Point other)
    {
        Point temp;
        temp.x_position = this->x_position - other.x_position;
        temp.y_position = this->y_position - other.y_position;
        return temp;
    }
    void print_record(void)
    {
        cout << "X position   :   " << this->x_position << endl;
        cout << "Y position   :   " << this->y_position << endl;
    }
    friend Point operator+(Point &p1, Point &p2);
    friend Point operator-(Point &p1, Point &p2);
};
Point operator+(Point &p1, Point &p2)
{
    Point temp;
    temp.x_position = p1.x_position + p2.x_position;
    temp.y_position = p1.y_position + p2.y_position;
    return temp;
}
Point operator-(Point &p1, Point &p2)
{
    Point temp;
    temp.x_position = p1.x_position - p2.x_position;
    temp.y_position = p1.y_position - p2.y_position;
    return temp;
}
int main()
{
    struct Point p1(10, 20);
    struct Point p2(30, 40);
    struct Point p3;
    // p3 = operator+(p1, p2);
    p3 = operator-(p1, p2);
    p3.print_record();
    return 0;
}