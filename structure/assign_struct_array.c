//print details of 3 students using struct in arrays
#include<stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int rollno;
		int idno;
	};
	int n,i;
	printf("Enter array size\n");
	scanf("%d",&n);
	struct student s1[n];
	
	printf("Enter details of student\n");
	printf("Enter name,rollno,idno\n");
	for(i=0;i<n;i++)
	{
		printf("Details of students[%d]:",i+1);
		scanf("%s%d%d",s1[i].name,&s1[i].rollno,&s1[i].idno);
	}
	printf("Entered details are\n");
	for(i=0;i<n;i++)
	{
	printf("Name=%s Roll=%d  Id=%d\n",s1[i].name,s1[i].rollno,s1[i].idno);
	}
}
