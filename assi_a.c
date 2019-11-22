//write program for addition of 3 number without using function declaration
#include<stdio.h>
void add(int a,int b,int c)
{
	int d;
	d=a+b+c;
	printf("Addition=%d\n",d);
}
void main()
{
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	add(a,b,c);
}

