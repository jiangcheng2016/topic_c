#include<stdio.h>
int main()
{
	int a[10],max,min;
	int i;
	int sum=0,ave;
	printf("������ʮ������\n");
	for(i = 0;i < 10;i ++)
		scanf("%d",&a[i]);
	//��max,min,sum
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
	//��ƽ�������
	ave = sum / 10;
	printf("���ֵΪ��%d\n ��СֵΪ��%d\n ƽ��ֵΪ��%d",max,min,ave);
}