#include<stdio.h>
#include<string.h>

int main()
{
	/*short a;
	a=-4;
	printf("\na:dec=%d,oct=%x,unsigned=%u\n",a,a,a);*/

	/*int a=5,b=4,c=3;
	if(a >= b >=c ) c++;
	printf("%d",c);
	return 0;*/

	/*int min,max,sum = 0;
	printf("请输入最小值和最大值，中间用空格隔开\n");
	scanf("%d%d",&min,&max);

	if(min >= max)
		printf("请检查最小值是否小于最大值!\n");

	for(int i = min;i <= max;i ++ )
		sum += i;

	printf("sum = %d",sum);
	return 0;*/

	//while(1);
	//for( ; ; );
	//int k = 11;
	//printf("k=%d,k=%o,k=%x",k,k,k);
	
	/*int y = -1;
	int x = 0;
	if(x != 0)
		if(x > 0) 
			y = 1;
		else
			y = 0;
	printf("%d",y);*/
	
	/*int x = 1,y = 1,z = 1;
	int t;
	t = ++ x || ++ y && ++ z;
	printf("%d",t);*/

	/*if(0)
		printf("right!");*/

	/*int i,j,n = 0;
	for(i = 5;i;i++)
		for(j = 0;j < 4;j ++)
		{
			n ++;
		}
	printf("执行了%d次\n",n);*/


	/*char s[12] = {"string"};
	printf("%d\n",strlen(s));*/

	/*int x,y,z;
	for(x = 0;x <= 100;x ++)
		for(y = 0;y <= 100;y ++)
			for(z = 0;z <= 100;z ++)
				if(x + y + z == 100 && 5 * x + 3 * y + z / 3 == 100)
					printf("x=%d,y=%d,z=%d\n",x,y,z);*/
	char s[12] = {"string"};
	printf("%d\n",strlen(s));
	printf("%d\n",sizeof(s));
	return 0;

}