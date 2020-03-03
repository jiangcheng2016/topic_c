#include<stdio.h>
int main()
{
	int i;
	for(i = 0;i < 500;i ++)
	{
		if(i % 7 == 0 || i % 9 == 0)
			printf("%d\n",i);
	}
	return 0;
}