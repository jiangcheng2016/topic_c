#include<stdio.h>

int main()
{
	int i=12,j=25,k=56;
	int r1,r2,r3,r4;
	
	//①(++i)*(++j)*(++k)
	r1 = (++i)*(++j)*(++k);
	printf("第一个式子的结果为%d\n i=%d,j=%d,k=%d\n",r1,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");
	
	//②(i++)*(j++)*(k++)
	r2 = (i++)*(j++)*(k++);
	printf("第二个式子的结果为%d\n i=%d,j=%d,k=%d",r2,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	//③i=i+j,j=j+k,k=k+i
	r3 = i=i+j,j=j+k,k=k+i;
	printf("第三个式子的结果为%d\n i=%d,j=%d,k=%d",r3,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	//④!(i=j) && (j=k)
	r4 = !(i=j) && (j=k);
	printf("第四个式子的结果为%d\n i=%d,j=%d,k=%d",r4,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	return 0;
}