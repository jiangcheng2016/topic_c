#include <stdio.h>

int main()
{
	int n, t = -1;
	float  sum = 0;
	scanf("%d",&n);
	for (int i = 1, j = 1; i < n; i ++, j += 2 )
		sum += (i * t) / j;
	printf("%.2f",sum);
	return 0;
}