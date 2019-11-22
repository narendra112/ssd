#include<stdio.h>
struct name
{
	char name[200];
	int roll;
	char dob[100];
};
struct details
{
	struct name info;
	int age;
	float idno;
};
int main()
{
	struct details s1;
	printf("Enter name\n");
	scanf("%s",s1.info.name);
	printf("Enter roll\n");
	scanf("%d",&s1.info.roll);
	printf("Enter dob\n");
	scanf("%s",s1.info.dob);
	printf("Enter age\n");
	scanf("%d",&s1.age);
	printf("Enter idno\n");
	scanf("%f",&s1.idno);
	printf("name=%s\n",s1.info.name);
	printf("roll=%d\n",s1.info.roll);
	printf("dob=%s\n",s1.info.dob);
	printf("age=%d\n",s1.age);
	printf("float=%.f\n",s1.idno);
}
