#include<stdio.h>
#include<math.h>
#define pi 3.141592

int main()
{
	int r1,r2;
	float area1,area2,area;
	printf("请输入圆环的内外半径:\n");
	scanf("%d%d",&r1,&r2);
	//求外圆的面积
	area2 = r2*r2*pi;
	//求内圆的面积
	area1 = r1*r1*pi;
	//圆环area
	area = area2-area1;
	printf("这个圆环的面积是 %f: ",area);
	return 0;
}