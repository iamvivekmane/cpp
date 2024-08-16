#include<iostream>
using namespace std;
class Point
{
private:
	int xPos;
	int yPos;
public:
	Point( int xPos = 0, int yPos = 0 )
	{
		this->xPos = xPos;
		this->yPos = yPos;
	}
	bool operator==( Point &other )
	{
		return this->xPos == other.xPos && this->yPos == other.yPos;
	}
	void printRecord( void )
	{
		cout<<this->xPos<<"	"<<this->yPos<<endl;
	}
};
int main( void )
{
	Point pt1(10,20);
	Point pt2(10,20);
	cout<<( pt1 == pt2  ? "Equal" : "Not Equal" )<<endl;
	return 0;
}
int main3( void )
{
	Point pt1(10,20);
	Point pt2(10,20);
	if( pt1 == pt2 )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
	return 0;
}
int main2( void )
{
	Point pt1(10,20);
	Point pt2(10,20);
	bool status = pt1 == pt2; //status = pt1.operator==( pt2 );
	if( status  )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
	return 0;
}
int main1( void )
{
	Point pt1(10,20);
	Point pt2(10,20);
	bool status = pt1 == pt2; //status = pt1.operator==( pt2 );
	if( status == true )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
	return 0;
}