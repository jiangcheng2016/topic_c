#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num,number1,number2;
	cin>>num1>>num2;

	number1 = num1;
	number2 = num2;

	//求最大公约数
	while(num2!=0)
	{
		num=num1%num2;
		num1=num2;
		num2=num;

	}
	cout << num1;
	//求最大公倍数
	//最小公倍数是两数之积整除最大公倍数
	cout << number1*number2/num1;
	return 0;
}


#include<stdio.h>
int main()
{
	printf("\n*s1=%10s*","chinabeijing");
	printf("\n*s2=%-5s*","chi");
	
	int x;
	float y;
	scanf("%3d%f",&x,&y);
	printf("%d  %f",x,y);

	int a1,a2;
	char c1,c2;
	scanf("%d%d",&a1,&a2);
	scanf("%c%c",&c1,&c2);
	printf("%d %d %c %c",a1,a2,c1,c2);

	int x;
	float y;
	printf("enter x,7:\n");
	scanf("%d%f",&x,&y);
	printf("\nx+y=%4.2f",x+y);
	
	char ch;
	ch = '\0';

	printf("%c",ch);

	short a;
	a = -4;
	printf("\na:dec=%d,oct=%x,unsigned=%u\n",a,a,a);*/

	int a1,a2,a3;
	scanf("%d%d%*d%d",&a1,&a2,&a3);
	printf("%d %d %d ",a1,a2,a3);

	char c1,c2;
	scanf("%4c%4c",&c1,&c2);
	printf("%c%c",c1,c2);

	int i = 10,j = 10;
	printf("%d %d",++i+j++,j--);
	



	return 0;

}








