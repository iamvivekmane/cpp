#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
public:
	Test( void )
	{
		this->num1 = 10;
		this->num2 = 20;
		this->num3 = 30;
	}
//public:	//OK
//protected:	//OK
protected:	//OK
	friend int main( void );
};
int main( void )
{
	Test t;
	cout<<"Num1	:	"<<t.num1<<endl;
	cout<<"Num2	:	"<<t.num2<<endl;
	cout<<"Num3	:	"<<t.num3<<endl;
	return 0;
}