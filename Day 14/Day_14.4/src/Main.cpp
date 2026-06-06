#include <iostream>
#include <cstring>
using namespace std;
class Complex
{
private:
	int real;
	int imaginary;

public:
	Complex(int real = 0, int imaginary = 0)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	void print_record(void)
	{
		cout << "Real number		:	" << this->real << endl;
		cout << "Imaginary number	:	" << this->imaginary << endl;
	}
};

int main()
{
	// int num1 = 10;
	// int num2 = num1; // Shallow copy , Bitwise copy , bit-by-bit copy
	// // -------------------------------------------------------------------------------

	// Complex c1(10, 20);
	// Complex c2;
	// memcpy(&c2, &c1, sizeof(Complex));
	// c2.print_record();
	// // -------------------------------------------------------------------------------

	int arr1[3] = {10, 20, 30};
	int arr2[3];
	memcpy(arr2, arr1, 3 * sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		cout << "Element " << i + 1 << "	:	" << arr2[i] << endl;
	}

	return 0;
}