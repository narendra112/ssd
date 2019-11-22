//passing 1d to function
#include<stdio.h>
void func(int a[]);
void main()
{
	int i,a[5]={1,2,3,4,5};
	func(a);
	printf("Inside main\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void func(int a[])
{
	int i;
	printf("Inside function\n");
	for(i=0;i<5;i++)
	{
	a[i]+=2;
	printf("%d ",a[i]);
	}
	printf("\n");
}
