#include<stdio.h>
#include<math.h>

int main()
{
	//��֪�׺͸������

	float d,h,area;
	printf("�����������εĵ׺͸�\n");
	scanf("%f%f",&d,&h);
	area = d*h/2;
	printf("�����ε����Ϊ��%f",area);

	//��֪���߳��������
	int a,b,c,p;
	float area;
	printf("�����������εĵ׺͸�\n");
	scanf("%d%d%d",&a,&b,&c);
	p = (a+b+c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("���������Ϊ��%f",area);
	return 0;
}