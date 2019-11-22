//program to illustrate indirection operator
#include<stdio.h>
void main(void)
{
	int x=10,y;
	int *p;
	p=&x;
	y=*p;
	printf("Value of x=%d\n",x);
//	printf("%d is stored at %p\n",*(&p),&p);
	printf("%d is stored at %p\n",x,&x);
	printf("%d is stored at %p\n",*(&x),&x);
	printf("%d is stored at %p\n",y,&y);
	printf("%p is stored at %p\n",p,&p);
	*p=25;
	printf("Now=%d\n",*p);
}
