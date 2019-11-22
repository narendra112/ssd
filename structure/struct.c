#include<stdio.h>
#include<string.h>
struct arr
{
	char name[20];
	int rollno;
	float marks;
};
void main()
{
	struct arr a={"Naren",25,68};
	struct arr b,c;
	strcpy(b.name,"John");
	b.rollno=15;
	b.marks=78;
	printf("Enter name,rollno,marks for c\n");
	scanf("%s %d %f",c.name,&c.rollno,&c.marks);
	printf("a=%s %d %f\n",a.name,a.rollno,a.marks);
	printf("b=%s %d %f\n",b.name,b.rollno,b.marks);
	printf("c=%s %d %f\n",c.name,c.rollno,c.marks);
}
