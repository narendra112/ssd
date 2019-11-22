//Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int digit(int num);
void main()
{
	int num,sum;
	printf("Enter any number\n");
	scanf("%d",&num);
	sum=digit(num);
	printf("sum of digit=%d\n",sum);
}

int digit(int num)
{
	if(num==0)
	return 0;
	return (num%10+(digit(num/10)));
}

