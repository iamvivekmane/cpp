#include <iostream>
using namespace std;
class Matrix
{
private:
    int row;
    int column;
    int **arr;

public:
    Matrix(void) : row(0), column(0), arr(NULL)
    {
    }
    Matrix(int row, int column) : row(row), column(column)
    {
        this->arr = new int *[this->row];
        for (int i = 0; i < row; i++)
        {
            this->arr[i] = new int[this->column];
        }
    }
    Matrix(const Matrix &other) : row(other.row), column(other.column)
    {
        this->arr = new int *[this->row];
        for (int i = 0; i < row; i++)
        {
            this->arr[i] = new int[this->column];
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                this->arr[i][j] = other.arr[i][j];
            }
        }
    }
    void accept_record(void)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Element  :   ";
                cin >> this->arr[i][j];
            }
        }
    }
    void print_record(void)
    {
        cout << "---------------------" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Element  :   " << this->arr[i][j] << endl;
            }
        }
    }
    void set_element(int row, int column, int element)
    {
        this->arr[row][column] = element;
    }
    int get_element(int row, int column)
    {
        return this->arr[row][column];
    }
};
int main()
{
    Matrix m1(2, 3);
    m1.accept_record();
    Matrix m2 = m1;
    m2.print_record();

    return 0;
}