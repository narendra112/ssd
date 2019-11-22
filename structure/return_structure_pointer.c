//returning structure pointer
#include<stdio.h>
struct student
{
	char name[30];
	int id;
	int roll;
};
void display(struct student *ptr);
struct student *func(struct student *p1,struct student *p2);
void main(void)
{
	struct student *ptr;
	struct student s1={"Naren",32,123},s2={"Sar",13,12};
	ptr=func(&s1,&s2);
	display(ptr);
}
struct student *func(struct student *p1,struct student *p2)
{
	if(p1->id>p2->id)
		return p1;
	else
		return p2;
}
void display(struct student *ptr)
{
	printf("%s\t",ptr->name);
	printf("%d\t",ptr->id);
	printf("%d\n",ptr->roll);
}
