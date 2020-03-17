#include <stdio.h>

int main()
{
	int i, j, m = 3, n = 4;
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

	FILE * fp;
	fp = fopen("mytest.txt","wt");
	for (i = 0; i < m; i ++)
	{
		for (j = 0; j < n; j ++)
			fprintf(fp,"%4d",a[i][j] * a[i][j]);
		fprintf(fp,"\n");
	}
	fclose(fp);

	return 0;
}