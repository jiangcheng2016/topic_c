#include<stdio.h>

int main()
{
	char ch;
	printf("请输入一个合法的大写字母: \n");
	ch = getchar();
	if(ch >= 'A' && ch <= 'Z')
		ch = ch + 'a' - 'A';
	else
		printf("请检查输入的大写字母是否正确！");
	printf("转换后的小写字母为:%c  ",ch);
	return 0;
}