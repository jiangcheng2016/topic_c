#include<stdio.h>
int main()
{
	int k,car_fare;
	printf("请输入行车里程数：\n");
	scanf("%d",&k);
	if(k < 3)
		car_fare = 6;
	else
	{
		car_fare = 6 + (k-3) * 1.5;
	}
	printf("应付车费：%1d\n",car_fare);
	return 0;
}