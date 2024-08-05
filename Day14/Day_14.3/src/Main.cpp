#include<cstring>
#include<iostream>
using namespace std;

class Array
{
private:
	int size;	//4 bytes
	int *arr;	//2/4/8 bytes
public:
	//Array *const this = &a1
	Array( void ) : size( 0 ), arr( NULL )
	{
		cout<<"Array( void )"<<endl;
	}

	//Array *const this = &a1
	Array( int size )
	{
		cout<<"Array( int size )"<<endl;
		this->size = size;
		this->arr = new int[ size ];
	}

	//Array *const this = &a1
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}

	//Array *const this = &a1
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	//Array *const this = &a1
	~Array( void )	//Destructor
	{
		cout<<"~Array( void )"<<endl;
		this->clear( );
	}
private:
	//Array *const this = &a1
	void clear( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Array a1(3);
	a1.acceptRecord();
	a1.printRecord();
	return 0;
}
int main1( void )
{
	Array *ptr = new Array( 3 ) ;	//Array::Array( int size )
	ptr->acceptRecord();
	ptr->printRecord();
	delete ptr;	//Array::~Array( );
	return 0;
}