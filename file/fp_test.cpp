#include<stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	if((fp = fopen("test1.txt", "at")) == NULL)
	{
		printf("can not open this file\n");
		exit(0);
	}
	while((ch = getchar()) != '@')
		fputc(ch,fp);
	fclose(fp);

	fp = fopen("test1.txt","rt");
	for (; (ch = fgetc(fp)) != EOF; )
		putchar(ch);

	fclose(fp);
	return 0;
}