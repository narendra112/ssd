#include<stdio.h>
struct student
{
	int sub1;
	int sub2;
	int sub3;
	int total;
};
int main()
{
	struct student s1[3]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	struct student total;
	int i;
	for(i=0;i<3;i++)
	{
		s1[i].total=s1[i].sub1+s1[i].sub2+s1[i].sub3;
		total.sub1=total.sub1+s1[i].sub1;
		total.sub2=total.sub2+s1[i].sub2;
		total.sub3=total.sub3+s1[i].sub3;
		total.total=total.total+s1[i].total;
	}
	printf("STUDENT TOTAL\n");
	for(i=0;i<3;i++)
	{
		printf("student[%d]=%d\n",i+1,s1[i].total);
	}
	printf("subject1  =  %d\nsubject2  =  %d\nsubject3  =  %d\n",total.sub1,total.sub2,total.sub3);
	printf("Total of all subject=%d\n",total.total);
}
