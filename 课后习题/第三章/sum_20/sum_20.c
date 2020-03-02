#include<stdio.h>
int main()
{
	int a[20],sum = 0;
	int i;
	printf("请输入20个整数：\n");
	for(i = 0;i < 20;i ++)
		scanf("%d",&a[i]);
	for(i = 0;i < 20;i ++)
	{
		if(a[i] > 20)
			sum += a[i];
	}
	printf("大于20的所有数的和为：%d\n",sum);
	return 0;
}