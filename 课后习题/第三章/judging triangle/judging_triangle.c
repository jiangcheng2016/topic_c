#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入的三条数据：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a)
		printf("可以构成三角形!\n");
	else
		printf("不可以构成三角形\n");
	return 0;
}