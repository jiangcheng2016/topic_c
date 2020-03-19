#include <stdio.h>

int main(){

	union 
	{
		char c;
		char i[4];
	}z;
	
	z.i[0] = 0x39;
	z.i[1] = 0x36;
	printf("%c\n",z.c);
	return 0;
}