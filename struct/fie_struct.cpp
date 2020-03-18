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
	fp = fopen("student.dat", "wb+");			///以读写方式打开二进制文件
	if(fp == NULL)
	{
		printf("can't create file : student.dat\n");
		exit(0);
	}
	
	fwrite(stu, sizeof(STUDENT), 3, fp);		//将学生信息写入到文件中
	rewind(fp);									//将文件位置指针置回到文件头

	memset(stu, 0, 3 * sizeof(STUDENT));		//清楚学生信息

	//读第一个和第三个学生的信息到结构数组stu中
	for (i = 0; i < 3; i += 2)
	{
		fseek(fp, i * sizeof(STUDENT), SEEK_SET);		///文件位置指针定位
		fread(&stu[i], sizeof(STUDENT), 1, fp);			//读取第一个学生信息
		printf("%12s %14s%5c%5d%15s\n",stu[i].no, stu[i].name, stu[i].sex, stu[i].age, stu[i].depart);
	}

	fclose(fp);			//关闭文件

	
	return 0;

}
