#include<stdio.h>

int main()
{
	int line,i,j;
	printf("ÇëÊäÈëĞĞÊı: \n");
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		for(j=0;j<i+line;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
		
}