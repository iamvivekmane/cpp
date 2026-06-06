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
    bool operator==(Point &other)
    {
        return this->x_position == other.x_position && this->y_position == other.y_position;
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
    // Point p2(11, 20);
    // bool status = p1 == p2; // status = p1.operator==(pt2);
    // if (status == true)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // }
    // // ---------------------------------------------------------------------
    // Point p1(10, 20);
    // Point p2(11, 20);
    // bool status = p1 == p2; // status = p1.operator==(pt2);
    // if (status)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // }
    // // ---------------------------------------------------------------------
    // Point p1(10, 20);
    // Point p2(11, 20);
    // if (p1 == p2)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not equal" << endl;
    // // ---------------------------------------------------------------------
    Point p1(10, 20);
    Point p2(11, 20);
    cout << (p1 == p2 ? "Equal" : "Not equal") << endl;
    return 0;
}
