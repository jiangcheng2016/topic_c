#include <stdio.h>

int main()
{

	int i, j, m = 3, n = 4;
	int b[3][4];

	FILE * fp;
	fp = fopen("mytest.txt","rt");

	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			fscanf(fp,"%4d",&b[i][j]);
	}
	fclose(fp);

	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			fprintf(stdout,"%4d",b[i][j]);
			//printf("%d ",b[i][j]);
		printf("\n");
	}

	return 0;
}