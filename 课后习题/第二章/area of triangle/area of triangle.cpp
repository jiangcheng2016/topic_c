#include<stdio.h>
#include<math.h>

int main()
{
	//已知底和高求面积

	float d,h,area;
	printf("请输入三角形的底和高\n");
	scanf("%f%f",&d,&h);
	area = d*h/2;
	printf("三角形的面积为：%f",area);

	//已知三边长，求面积
	int a,b,c,p;
	float area;
	printf("请输入三角形的底和高\n");
	scanf("%d%d%d",&a,&b,&c);
	p = (a+b+c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("三角形面积为：%f",area);
	return 0;
}