#include<stdio.h>
int main()
{
	int min,max,sum = 0,i;
	printf("请输入最小值和最大值，中间用空格隔开\n");
	scanf("%d%d",&min,&max);
	
	if(min >= max)
		printf("请检查最小值是否小于最大值!\n");
	else
	{
		for(i = min;i <= max;i ++ )
		{
			sum += i;
		}
		printf("sum = %d\n",sum);
	}

	return 0;
}