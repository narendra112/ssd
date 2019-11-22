//program to find sizeof without using sizeof operator
/*#include<stdio.h>
void main()
{
	short int a=10;
	int s;

	s=(int )(&a+1)-(int)(&a);
	printf("%d",s);
}*/
#include<stdio.h>
void main()
{
	char *p;
	p++;
	printf("Size of data type=%d\n",p);
}
