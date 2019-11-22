#include<stdio.h>
struct student1
{
	int rollno;
	char *name;
	int age;
};
void main()
{
	struct student1 student;
	student.rollno=34;
	student.name="Narendra";
	student.age=15;
	printf("Rollno%d\n",student.rollno);
	printf("Name=%s\n",student.name);
	printf("Age=%d\n",student.age);
}
