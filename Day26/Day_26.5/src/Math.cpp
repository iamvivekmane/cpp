#include "../include/Math.h"

const float Math::PI = 3.142;
float Math::pow(float base, int index)
{
    float result = 1;
    for (int i = 1; i <= index; i++)
    {
        result = result * base;
    }
    return result;
}