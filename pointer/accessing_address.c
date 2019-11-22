#include<stdio.h>
void main(void)
{
	int a;
	char b;
	float p,q;
	a=10;
	b='a';
	p=10.13,q=12.234;
	printf("Address of a=%p\n",&a);
	printf("Address of b=%p\n",&b);
	printf("Address of p=%p\n",&p);
	printf("Address of q=%p\n",&q);
}
