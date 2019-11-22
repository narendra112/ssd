#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int idno;
};
int main()
{
	struct student s1[10];
	int i;
	for(i=1;i<5;i++)
	{
		printf("Enter name,rollno,idno\n");
		scanf("%s%d%d",s1[i].name,&s1[i].rollno,&s1[i].idno);
	}
	for(i=1;i<5;i++)
	{
		printf("Name=%s Rollno=%d idno=%d\n",s1[i].name,s1[i].rollno,s1[i].idno);
	}
}
