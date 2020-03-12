#include<stdio.h>

int main()
{
	int n,b,c = 0;
	for(n = 1;c <= 100;n ++)
	{
		b = n * 10 + 2;
		c += b;
	}
	printf("%d\n",n);
	return 0;
}