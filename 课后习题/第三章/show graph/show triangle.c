#include<stdio.h>

int main()
{	
	/*
		���д�ӡ�����Σ������Ӽ������룬��������Ϊ5
						*
					   ***
					  *****
					 *******
					*********
	*/
	int line,i,j,k;
	printf("����������: \n");
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