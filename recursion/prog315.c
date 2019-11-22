//Write a C program to find factorial of any number using recursion.
#include<stdio.h>
int fact (int num );
void main()
{
	int num,fa;
	printf("Enter any number to find factorial\n");
	scanf("%d",&num);
	fa=fact(num);
	printf("Factorial of number=%d\n",fa);
}


int fact(int num)
{
	if(num==0)
		return 1;
	else
	return num*fact(num-1);
}
