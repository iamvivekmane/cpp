#include <iostream>
#include <cstring>
using namespace std;

class Array
{
private:
	int size; // 4 bytes
	int *arr; // 2//4//8 bytes

public:
	// Array *const this = &a1
	Array(void) : size(0), arr(NULL)
	{
		cout << "Array(void)" << endl;
	}

	Array(int size)
	{
		cout << "Array(int size)" << endl;
		this->size = size;
		this->arr = new int[size];
	}

	// Array *const this = &a1
	void accept_record(void)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Element " << i + 1 << ":   ";
			cin >> this->arr[i];
		}
	}

	// Array *const this = &a1
	void print_record(void)
	{
		cout << "---------------------" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "Element " << i + 1 << ":   " << this->arr[i] << endl;
		}
	}
	~Array(void) // Destructor
	{
		cout << "~Array(void)" << endl;
		this->clear();
	}

private:
	void clear(void)
	{
		if (arr != NULL)
		{
			delete[] arr;
			arr = NULL;
		}
	}
};
int main()
{
	// Array a1;
	// a1.accept_record(); // a1.print_record(&a1);
	// a1.print_record();	// a1.print_record(&a1);
	// // -----------------------------------------------------------------------------------------------
	Array *ptr = new Array(3); // Array::Array(3);
	ptr->accept_record();
	ptr->print_record(); // Array::~Array();
	return 0;
}