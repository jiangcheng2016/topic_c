#include<stdio.h>
int main()
{
	int min,max,sum = 0,i;
	printf("��������Сֵ�����ֵ���м��ÿո����\n");
	scanf("%d%d",&min,&max);
	
	if(min >= max)
		printf("������Сֵ�Ƿ�С�����ֵ!\n");
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