//structure to pointer
#include<stdio.h>
struct student
{
	char name[20];
	int id;
	int roll;
};
void display(struct student *);
void inc(struct student *);
void main (void)
{	
	struct student s1={"Narendra",29,20};
	struct student s2={"Satish",22,21};
	inc(&s1);
	display(&s1);
	display(&s2);
}
void display(struct student *p)
{
	printf("%s\t",p->name);
	printf("%d\t",p->id);
	printf("%d\n",p->roll);
}
void inc(struct student *p)
{
	(p->roll)++;
}
