#include<stdio.h>
int main()
{
	/*
		1.��д���򣬴Ӽ����������ε����µױ߳��Ⱥ͸ߣ��������ε����
		area = ���ϵ�+�µף�*��/2
	*/
	float l_up,l_bo,high,area;
	printf("Please input the length of up and bottom:\n");
	scanf("%f%f%f",&l_up,&l_bo,&high);
	area = (l_up + l_bo) * high / 2;
	printf("������ε����Ϊ��%f",area);
	return 0;
}