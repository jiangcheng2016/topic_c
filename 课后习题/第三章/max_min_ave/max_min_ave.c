#include<stdio.h>
int main()
{
	int a[10],max,min;
	int i;
	int sum=0,ave;
	printf("请输入十个数：\n");
	for(i = 0;i < 10;i ++)
		scanf("%d",&a[i]);
	//求max,min,sum
	max = a[0];
	min = a[0];
	sum += a[0];
	for(i = 1;i < 10;i ++)
	{
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
		sum += a[i];
	}
	//求平均并输出
	ave = sum / 10;
	printf("最大值为：%d\n 最小值为：%d\n 平均值为：%d",max,min,ave);
}