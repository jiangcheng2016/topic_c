#include<stdio.h>

int main()
{	
	/*
		按行打印三角形，行数从键盘输入，例如行数为5
						*
					   ***
					  *****
					 *******
					*********
	*/
	int line,i,j,k;
	printf("请输入行数: \n");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		for(j=0;j<line-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
		
}