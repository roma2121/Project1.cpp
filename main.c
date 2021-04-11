#include <stdio.h>
#include "ln.h"
int main()
{
    double x = 0.1;
    double result = ln(x);
    double accuracy = 0.001;
    double meaning = 0.09531;
    double average = meaning - result;
    if (average > 0)
    {
        average *= -1;
    }
    if (average > accuracy)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
