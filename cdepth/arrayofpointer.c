//difference between pointer to an integer & array of pointer
#include<stdio.h>
void main()
{
	int *p,(*ptr)[5];
	int a[5];
	p=a;
	ptr=&a;
	printf("%p %p\n",p,ptr);
	p++;
	ptr++;
	printf("%p %p\n",p,ptr);
}
