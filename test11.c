#include <stdio.h>
int main()
{
	int i, t, k;
	for (t = 50, k = 0; t <= 100; t ++)
	{
		for (i = 2; i < t; i ++)
			if(t % i == 0)
				break;
		if(i == t)
		{
			printf("%d ",t);
			k ++;
			if(k % 5 == 0) printf("\n");
		}
	}
	return 0;
}