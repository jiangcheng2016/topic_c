#include<stdio.h>
#include<math.h>
#define pi 3.141592

int main()
{
	int r1,r2;
	float area1,area2,area;
	printf("������Բ��������뾶:\n");
	scanf("%d%d",&r1,&r2);
	//����Բ�����
	area2 = r2*r2*pi;
	//����Բ�����
	area1 = r1*r1*pi;
	//Բ��area
	area = area2-area1;
	printf("���Բ��������� %f: ",area);
	return 0;
}