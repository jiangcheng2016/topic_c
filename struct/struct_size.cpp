#include <stdio.h>

struct _date
{
	int year;
	int month;
	int day;

};

typedef struct _person
{
	int id;			//身份证号
	char name[8];	//姓名
	char sex;		//性别
	struct _date birthday;	//出生日期
}Person;

int main()
{
	printf("%d, %d\n",sizeof(struct _date), sizeof(Person));
	Person person1;
	person1.id = 1;
	printf("%d",person1.id);
	return 0;
}