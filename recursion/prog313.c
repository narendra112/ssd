//Write a C program to check whether a number is palindrome or not using recursion
#include<stdio.h>
#include<math.h>
int palin(int num);
void main()
{
	int num,rev;
	printf("Enter any number");
	scanf("%d",&num);
	rev=palin(num);
	if(num==rev)
		printf("Given number is palindrome\n");
	else
		printf("Given number is not palindrome\n");
}

int palin(int num)
{
	int digit;
	digit=(int)log10(num);
	if(num==0)
		return 0;
	return((num%10*pow(10,digit))+palin(num/10));
}
