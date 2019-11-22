//call by reference
#include<stdio.h>
void ref(int *a,int *b);
void main()
{
	int a=5,b=3;
	printf("%d  %d\n",a,b);
	ref(&a,&b);
	printf("%d  %d\n",a,b);
}
void ref(int *a,int *b)
{
	(*a)++;
	(*b)++;
	printf("%d  %d\n",*a,*b);
}
