#include <iostream>
using namespace std;
class Point
{
private:
    int xPos;
    int yPos;

public:
    Point(int xPos = 0, int yPos = 0) : xPos(xPos), yPos(yPos)
    {
    }
    // Point *const this = &pt1;
    // Point other = pt2
    /*Point operator+( Point other )
    {
        Point temp;
        temp.xPos = this->xPos + other.xPos;
        temp.yPos = this->yPos + other.yPos;
        return temp;
    }*/
    Point operator-(Point other)
    {
        Point temp;
        temp.xPos = this->xPos + other.xPos;
        temp.yPos = this->yPos + other.yPos;
        return temp;
    }
    void printRecord(void)
    {
        cout << this->xPos << "	" << this->yPos << endl;
    }
    friend Point operator+(Point &pt1, Point &pt2);
};
Point operator+(Point &pt1, Point &pt2)
{
    Point temp;
    temp.xPos = pt1.xPos + pt2.xPos;
    temp.yPos = pt1.yPos + pt2.yPos;
    return temp;
}
int main(void)
{
    Point pt1(10, 20);
    Point pt2(30, 40);
    Point pt3;
    // pt3 = pt1 + pt2; //pt3 = pt1.operator+( pt2 )
    // pt3 = pt1 + pt2; //pt3 = operator+( pt1, pt2 );

    pt3 = pt1 - pt2; // pt3 = pt1.operator-( pt2 );
    pt3.printRecord();
    return 0;
}