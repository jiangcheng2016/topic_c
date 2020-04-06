#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0; 
    printf("Please input n: ");
    scanf("%d",&n);
    int y = 2, t = 1;
    for (int i = 1; i <= 2 * n; i ++)
    {
        sum += pow(i, y);
        y += t;
        t *= -1;
    }
    printf("Sum = %d", sum);
    
    return 0;
}