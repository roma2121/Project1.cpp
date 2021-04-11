#include <stdio.h>
#include "power.h"
double power(double x, int y, double z)
{
    for (int i = 1; i < y; i++)
        x *= z;
    return x;
}

