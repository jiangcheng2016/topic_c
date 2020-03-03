#include<stdio.h>
int main()
{
	int i,j,k;
	for(i = 1;i <= 4;i ++)
	{
		for(j = 1;j <= 4-i; j++)
			printf(" ");
		for(k = 0;k < i;k ++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 3;i > 0; i--)
	{
		for(k = 0;k < i;k ++)
			printf("*");
		printf("\n");
	}


	return 0;
}