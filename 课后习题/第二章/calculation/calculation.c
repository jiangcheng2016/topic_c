#include<stdio.h>

int main()
{
	int i=12,j=25,k=56;
	int r1,r2,r3,r4;
	
	//��(++i)*(++j)*(++k)
	r1 = (++i)*(++j)*(++k);
	printf("��һ��ʽ�ӵĽ��Ϊ%d\n i=%d,j=%d,k=%d\n",r1,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");
	
	//��(i++)*(j++)*(k++)
	r2 = (i++)*(j++)*(k++);
	printf("�ڶ���ʽ�ӵĽ��Ϊ%d\n i=%d,j=%d,k=%d",r2,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	//��i=i+j,j=j+k,k=k+i
	r3 = i=i+j,j=j+k,k=k+i;
	printf("������ʽ�ӵĽ��Ϊ%d\n i=%d,j=%d,k=%d",r3,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	//��!(i=j) && (j=k)
	r4 = !(i=j) && (j=k);
	printf("���ĸ�ʽ�ӵĽ��Ϊ%d\n i=%d,j=%d,k=%d",r4,i,j,k);
	printf("-----------------------------------\n");
	printf("\n");

	return 0;
}