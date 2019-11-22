#include<stdio.h>
void swp(int,int);
void main()
{
	static int a=11,b=12;
//	printf("enter any two numbers:\n");
//	scanf("%d%d",&a,&b);
//	printf("In maina=%d\tb=%d\n",a,b);
	swp(a,b);
	printf("After came from function def a=%d\t,b=%d\n",a,b);
}
void swp(int x,int y)
{
	y=y+11;
	x=x+11;
}
