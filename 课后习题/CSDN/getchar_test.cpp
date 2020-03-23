#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char ch;
	int a;

	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º");
	ch = getchar();
	//ch = gets();
	printf("%c",ch);
	if(ch >= '0' && ch <= '9')
	{
		a = ch - '0';
		printf("a = %d",a);
	}
	else 
		printf("error");
	return 0;
}