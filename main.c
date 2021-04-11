#include <stdio.h>
#include <stdio.h>
#include "power.h"
double ln(double x)
{
    int a = 1;
    double add = 0 , z = x;
    for (int y = 1; y < 10; y++)
    {
        add += ((power(x, y, z) / (y)) * a);
        a *= -1;
    }
    return add;
}
