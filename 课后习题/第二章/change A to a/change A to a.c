#include<stdio.h>

int main()
{
	char ch;
	printf("������һ���Ϸ��Ĵ�д��ĸ: \n");
	ch = getchar();
	if(ch >= 'A' && ch <= 'Z')
		ch = ch + 'a' - 'A';
	else
		printf("��������Ĵ�д��ĸ�Ƿ���ȷ��");
	printf("ת�����Сд��ĸΪ:%c  ",ch);
	return 0;
}