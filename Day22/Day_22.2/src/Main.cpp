#include <iostream>
using namespace std;
class Math
{
public:
    static double pow(double base, int index)
    {
        double result = 1;
        for (int i = 1; i <= index; i++)
        {
            result = result * base;
        }
        return result;
    }
};
int main()
{
    double result = Math::pow(5.0, 2);
    cout << "Result   :   " << result << endl;
    return 0;
}