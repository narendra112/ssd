//returning structure
#include<stdio.h>
struct student 
{
	char name[30];
	int id;
	int roll;
};
void display(struct student stu);
struct student change(struct student stu);
void main(void)
{
	struct student s1={"Nare",1,123};
	struct student s2={"Sat",11,15};
	s1=change(s1);
	s2=change(s2);
	display(s1);
	display(s2);
}
struct student change(struct student stu)
{
	stu.id-=2;
	stu.roll-=2;
	return stu;
}
void display(struct student stu)
{
	printf("%s\t",stu.name);
	printf("%d\t",stu.id);
	printf("%d\n",stu.roll);
}
