#include<stdio.h>
struct student
{
	int rollno;
	char name[100];
	int idno;
};
void display(struct student s1);
void main()
{
	struct student s1;
	printf("Enter rollno\n");
	scanf("%d",&s1.rollno);
	printf("Enter name\n");
	scanf("%s",s1.name);
	printf("Enter idno\n");
	scanf("%d",&s1.idno);
	display(s1);
}
void display(struct student s1)
{
	printf("Rollno=%d\n",s1.rollno);
	printf("Name=%s\n",s1.name);
	printf("Idno=%d\n",s1.idno);
}

