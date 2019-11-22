#include<stdio.h>
void main(void)
{
	int x=10,y=20,z=30;
	int *p=&x;
	int *p1=&y;
	int *p2=&z;
	printf("%d %d %d\n",*p,*p1,*p2);
}
