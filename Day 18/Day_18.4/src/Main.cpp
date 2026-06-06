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
    Point operator+=(Point &other) // Pre-Increament
    {
        this->y_position += other.y_position;
        this->x_position += other.x_position;
        return (*this);
    }
    void print_record(void)
    {
        cout << "X position   :   " << this->x_position << endl;
        cout << "Y position   :   " << this->y_position << endl;
    }
};
int main(void)
{
    Point p1(10, 20);
    Point p2(30, 40);
    Point p3(50, 60);
    // pt1 += pt2;	//pt1.operator+=( pt2 )
    p1 = p2 += p3;     // p1= p2.operator+=(p3);
    p1.print_record(); // 80,100
    p2.print_record(); // 80,100
    p3.print_record(); // 50,60
    return 0;
}
