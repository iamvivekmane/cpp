#include <iostream>
using namespace std;
class Point
{
private:
    int xPos;
    int yPos;

public:
    Point(int xPos = 0, int yPos = 0)
    {
        this->xPos = xPos;
        this->yPos = yPos;
    }
    // Point *const this = &pt1
    // Point &other = pt2
    Point operator+(Point &other)
    {
        Point temp;
        temp.xPos = this->xPos + other.xPos;
        temp.yPos = this->yPos + other.yPos;
        return temp;
    }
    Point operator+(int value)
    {
        Point temp;
        temp.xPos = this->xPos + value;
        temp.yPos = this->yPos + value;
        return temp;
    }
    void printRecord(void)
    {
        cout << this->xPos << "	" << this->yPos << endl;
    }
};
int main(void)
{
    Point pt1(10, 20);
    Point pt2 = pt1 + 5; // pt2 = pt1.operator+( pt2 );
    pt2.printRecord();
    return 0;
}
int main1(void)
{
    Point pt1(10, 20);
    Point pt2(30, 40);
    Point pt3;
    pt3 = pt1 + pt2; // pt3 = pt1.operator+( pt2 );
    pt3.printRecord();
    return 0;
}