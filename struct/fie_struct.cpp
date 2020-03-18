#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct student_info
{
	char no[9];
	char name[10];
	char sex;
	int age;
	char depart[15];
}STUDENT;

//////////////////////////
int main()
{
	int i;
	FILE * fp;
	STUDENT stu[3] = {
						{"0001", "WangFei", 'M', 18, "Computer"},
						{"0002", "ZhangMin", 'M', 18, "Math"},	
						{"0003", "LiYan", 'F', 19, "English"}
						};
	fp = fopen("student.dat", "wb+");			///�Զ�д��ʽ�򿪶������ļ�
	if(fp == NULL)
	{
		printf("can't create file : student.dat\n");
		exit(0);
	}
	
	fwrite(stu, sizeof(STUDENT), 3, fp);		//��ѧ����Ϣд�뵽�ļ���
	rewind(fp);									//���ļ�λ��ָ���ûص��ļ�ͷ

	memset(stu, 0, 3 * sizeof(STUDENT));		//���ѧ����Ϣ

	//����һ���͵�����ѧ������Ϣ���ṹ����stu��
	for (i = 0; i < 3; i += 2)
	{
		fseek(fp, i * sizeof(STUDENT), SEEK_SET);		///�ļ�λ��ָ�붨λ
		fread(&stu[i], sizeof(STUDENT), 1, fp);			//��ȡ��һ��ѧ����Ϣ
		printf("%12s %14s%5c%5d%15s\n",stu[i].no, stu[i].name, stu[i].sex, stu[i].age, stu[i].depart);
	}

	fclose(fp);			//�ر��ļ�

	
	return 0;

}
