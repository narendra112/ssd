//Program to Swap Elements Using Call by Reference
#include<stdio.h>
void swap(int *a,int *b,int *c);
void main()
{
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("Before swap\n%d  %d  %d\n",a,b,c);
	swap(&a,&b,&c);
	printf("After swap\n%d  %d  %d",a,b,c);
}
void swap(int *a,int *b,int *c)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=*c;
	*c=temp;
}
