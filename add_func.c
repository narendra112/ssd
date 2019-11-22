#include<stdio.h>
int a,b,sum;
void func()
{
	sum=a+b;
	printf("%d\n",sum);
}
void main()
{
	printf("enter 2 number\n");
	scanf("%d %d",&a, &b);
	func();
}
