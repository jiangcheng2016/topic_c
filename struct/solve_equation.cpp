#include<stdio.h>
#include<math.h>
#define Solution root(Coef par);
typedef struct _coef
{
	float a, b, c;
}Coef;

typedef struct _solution
{
	int flag;			//flag = -1���޽⣬flag = 0����ʵ����flag = 1���ظ���flag = 2��������
	float x1, x2;
}Solution;


int main()
{
	//Coef rp;
	Solution rt;
	printf("���뷽�̵�ϵ����\n");
	scanf("%f%f%f",&rp.a, &rp.b, &rp.c);
	printf("%8.4f\n %8.4f\n %8.4f\n",rp.a, rp.b, rp.c);
	rt = root(rp);
	if(rt.flag == -1)
		printf("����ϵ������\n");

	else if(rt.flag == 0)
		printf("������ʵ��\n");
	else if(rt.flag == 1)
		printf("������һ���ظ�:x = %8.4f\n ",rt.x1);
	else
		printf("������������: x1 = %8.4f, x2 = %8.4f \n",rt.x1,rt.x2);
	return 0;
}

Solution root(Coef par)
{
	double d;
	Solution r;
	if(par.a == 0 && par.b == 0)
	{
		r.flag = -1;
		return r;
	}
	d = par.b * par.b - 4 * par.a * par.c;
	if(d < 0)
		r.flag = 0;
	else if(d == 0)
	{
		r.flag = 1;
		r.x1 = r.x2 = -par.b / (2 * par.a);
	}
	else{
		r.flag = 2;
		r.x1 = (-par.b + sqrt(d)) / (2 * par.a);
		r.x2 = (-par.b - sqrt(d)) / (2 * par.a);
	}


	return r;
}