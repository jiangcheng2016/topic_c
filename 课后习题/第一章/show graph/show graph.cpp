#include<stdio.h>

int main()
{
	//1.输出图形
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
			printf("#");
			printf("\n");
	}
	
	//2.输出名字
	printf("Hello My name is fendoudetudou\n");

	return 0;
}