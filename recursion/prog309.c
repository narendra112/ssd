//Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
int evenodd(int lower,int upper);
void main()
{
	int lower,upper;
	printf("Enter limits to find even & odd\n");
	scanf("%d %d",&lower,&upper);
	printf("Even/odd Numbers are= ");
	evenodd(lower,upper);
}

int evenodd(int lower,int upper)
{
	if(lower>upper)
	{
		return 0;
	}
		printf("%d\t",lower);
		evenodd (lower+2,upper);

}

