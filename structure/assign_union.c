//program for union 
#include<stdio.h>
#include<string.h>
union student
{
	char name[20];
	int idno;
	int rollno;
};
void main()
{
	union student s1;
 	strcpy(s1.name,"Narendra");
	s1.idno=10;
	s1.rollno=11;
	printf("Name=%s\n",s1.name);
	printf("Rollno=%d\n",s1.rollno);
	printf("Idno=%d\n",s1.idno);
}
