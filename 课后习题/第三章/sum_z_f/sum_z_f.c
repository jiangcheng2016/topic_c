#include<stdio.h>
int main()
{
	int a[10],sum_z = 0,sum_f = 0;
	int i;
	printf("������ʮ������(�����и�)��\n");
	for(i = 0;i < 10;i ++)
		scanf("%d",&a[i]);
	for(i = 0;i < 10;i ++)
	{
		if(a[i] < 0)
			sum_f += a[i];
		else
			sum_z += a[i];
	}
	printf("�������ĺ�Ϊ��%d\n �������ĺ�Ϊ��%d \n",sum_z,sum_f);
	return 0;
}