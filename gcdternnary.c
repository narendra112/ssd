#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2;
	volatile int nume,deno,rem;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);
	nume=n1;
	deno=n2;
	while(1)
	{
	(rem=nume%deno)?((deno=(((nume=deno)/deno))*(rem))):((rem==0)?exit(printf("GCD=%d\n",deno)):1);
	}
}
