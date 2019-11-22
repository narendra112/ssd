//structure in pointer
#include<stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int idno;
		int rollno;
	};
	struct student *s1,s2;
	s1=&s2;
	printf("Enter details of students\n ");
	scanf("%s%d%d",(*s1).name,&(*s1).idno,&(*s1).rollno);
	printf("Students details are\n");
	printf("%s  %d  %d\n",(*s1).name,(*s1).idno,(*s1).rollno);
}
