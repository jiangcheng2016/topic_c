#include <stdio.h>

double function(int a, int b, double x)
{
    if(a > 1 && b == 0)
        x = x / a;
    if(a == 2 || x > 1)
        x = x + 1;
    
    return x;
}

int main()
{
    int a = 2, b = 0, x = 1;
    printf("%f",function(a, b, x));
    return 0;
}