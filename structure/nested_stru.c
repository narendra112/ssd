#include<stdio.h>
struct a
{
	char name[100];
	int date;
	char day[100];
	struct b
	{
		char name2[100];
		char dob[100];
		int roll;
	}k;
}k2;
int main()
{
//struct a v;
printf("Enter details\n");
scanf("%s%d%d",k2.k.name2,&k2.date,k2.day);//v.k.name2,v.k.dob,&v.k.roll);
}
