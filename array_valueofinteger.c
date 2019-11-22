///*C program to change the value of constant integer using pointers.*/
#include<stdio.h>
void main()
{
	int a=10;
	int *p1;
	p1=&a;
	printf("Before changing=%d\n",a);
	*p1=20;
	printf("After changing=%d\n",a);
}
