#include<stdio.h>

int main()
{
	/*short a;
	a=-4;
	printf("\na:dec=%d,oct=%x,unsigned=%u\n",a,a,a);*/

	/*int a=5,b=4,c=3;
	if(a >= b >=c ) c++;
	printf("%d",c);
	return 0;*/

	int min,max,sum = 0;
	printf("请输入最小值和最大值，中间用空格隔开\n");
	scanf("%d%d",&min,&max);

	if(min >= max)
		printf("请检查最小值是否小于最大值!\n");

	for(int i = min;i <= max;i ++ )
		sum += i;

	printf("sum = %d",sum);
	return 0;

}