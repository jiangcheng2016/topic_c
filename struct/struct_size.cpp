#include <stdio.h>

struct _date
{
	int year;
	int month;
	int day;

};

typedef struct _person
{
	int id;			//���֤��
	char name[8];	//����
	char sex;		//�Ա�
	struct _date birthday;	//��������
}Person;

int main()
{
	printf("%d, %d\n",sizeof(struct _date), sizeof(Person));
	Person person1;
	person1.id = 1;
	printf("%d",person1.id);
	return 0;
}