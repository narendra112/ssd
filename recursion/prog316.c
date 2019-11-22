//Write a C program to generate nth Fibonacci term using recursion.
#include<stdio.h>
int fib(int num);
void main()
{
	int num,fibnocassi;
	printf("Enter nth number to print fibobacci term\n");
	scanf("%d",&num);
	fibnocassi=fib(num);
	printf("Fibnocassi term of nth term=%d\n",fibnocassi);
}

int fib(int num)
{
	if(num==0)
		return 0;
	else if(num==1)
		return 1;
	return fib(num-1)+fib(num-2);
}
