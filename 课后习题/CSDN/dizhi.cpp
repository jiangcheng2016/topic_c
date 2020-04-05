#include<stdio.h>
#include<stdlib.h>

void fun(int *p1,int *p2,int *s)
{
	s = (int *)malloc(sizeof(int));
	*s = *p1 + *p2;
	free(s);
}

int main()
{
	int a=1,b=40,*q=&a;
	fun(&a,&b,q);
	printf("%d", *q);
	return 0;
}