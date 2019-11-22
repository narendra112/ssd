#include<stdio.h>
struct student
{
                char name[20];
                int rollno;
                int idno;
        };
void print(struct student s1);
void main()
{
	struct student s2;
	printf("Enter name,rollno,idno\n");
	scanf("%s %d %d",s2.name,&s2.rollno,&s2.idno);
	printf("Before modify\n");
	printf("%s  %d  %d\n",s2.name,s2.rollno,s2.idno);
	print(s2);
}

void print(struct student s1)
{
// 	s1.name[10]="Narendra";
	s1.rollno=10;
	s1.idno=12;
	printf("After modify\n");
	printf("%s  %d   %d\n",s1.name,s1.rollno,s1.idno);
}

