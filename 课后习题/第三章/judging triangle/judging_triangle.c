#include<stdio.h>
int main()
{
	int a,b,c;
	printf("��������������ݣ�\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a)
		printf("���Թ���������!\n");
	else
		printf("�����Թ���������\n");
	return 0;
}