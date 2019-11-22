//passing array of structure as argument
#include<stdio.h>
struct s 
{
	char name[30];
	int id;
	int roll;
};
void display(struct s s1);
void main(void)
{
	int i;
	struct s s1[3]={{"Nare",13,23},{"DFFG",2,2},{"SDF",1,2}};
	for(i=0;i<3;i++)
	{
		display(s1[i]);
	}
}
void display(struct s s1)
{
	printf("Name=%s\t",s1.name);
	printf("Id=%d\t",s1.id);
	printf("Roll=%d\n",s1.roll);
}
