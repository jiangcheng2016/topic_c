#include<stdio.h>
int main()
{
	int a[10],sum_z = 0,sum_f = 0;
	int i;
	printf("请输入十个整数(有正有负)：\n");
	for(i = 0;i < 10;i ++)
		scanf("%d",&a[i]);
	for(i = 0;i < 10;i ++)
	{
		if(a[i] < 0)
			sum_f += a[i];
		else
			sum_z += a[i];
	}
	printf("正整数的和为：%d\n 负整数的和为：%d \n",sum_z,sum_f);
	return 0;
}