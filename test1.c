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
	printf("��������Сֵ�����ֵ���м��ÿո����\n");
	scanf("%d%d",&min,&max);

	if(min >= max)
		printf("������Сֵ�Ƿ�С�����ֵ!\n");

	for(int i = min;i <= max;i ++ )
		sum += i;

	printf("sum = %d",sum);
	return 0;

}