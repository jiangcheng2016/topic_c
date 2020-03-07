#include<stdio.h>
int main()
{
	/*
		1.编写程序，从键盘输入梯形的上下底边长度和高，计算梯形的面积
		area = （上底+下底）*高/2
	*/
	float l_up,l_bo,high,area;
	printf("Please input the length of up and bottom:\n");
	scanf("%f%f%f",&l_up,&l_bo,&high);
	area = (l_up + l_bo) * high / 2;
	printf("这个梯形的面积为：%f",area);
	return 0;
}