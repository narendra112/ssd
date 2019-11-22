//Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int even(int start,int stop);
void main()
{
	int start,stop;
	printf("Enter numbers to find even\n");
	scanf("%d %d",&start,&stop);
	printf("Sum of even=%d\n",even(start,stop));
}

int even(int start,int stop)
{
	if(start>stop)
	return 0;
	else
	return(start+even(start+2,stop));
}

