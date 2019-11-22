#include<stdio.h>
void main()
{
	int a=87,b=4.5;
	int p1*=&a;;
	int *p=&b;
	printf("Address of a=%p\n",&a);
	printf("Address of b=%p\n",&b);
	printf("Address of p1=%p\n",&p1);
	printf("Address of p2=%p\n",&p);
	printf("Value of a=%d %d %p\n",a,*p1,*(&p1));
	printf("Value of b=%d %d %p\n",b,*p,*(&p));
}

