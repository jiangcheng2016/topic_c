#include<stdio.h>
#define N 10

int function_max(int a[])
{
	int i,j,temp,flag = 1;
	for(i = N;i >= 1 && flag == 1;i --)
	{
		flag = 0;
		for(j=0;j<i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
	}
	return a;
}

int main()
{
	int i,a[N];
	printf("请输入一组数：\n");
	for(i = 0;i < N;i ++)
		scanf("%d",&a[i]);
	function_max(a);
	printf("数组a中最大元素为：%1d,次大元素为：%1d\n",a[N-1],a[N-2]);
	return 0;
}