#include<stdio.h>
struct a
{
	char age[12];
	int dob;
	float id;
};
int main(void)
{
	struct a w;
	struct a n;
	printf("Enter w values\n");
	scanf("%s %d %f",w.age,&w.dob,&w.id);
	n = w;
	printf("%p %p %p\n",&w.age,&w.dob,&w.id);
//	printf("%s %d %f\n",a.age,a.dob,a.id);
	printf("%s %d %f\n",n.age,n.dob,n.id);
	printf("%ld",sizeof(struct a));
	return 0;
}
