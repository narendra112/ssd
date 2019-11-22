//Write a C program to find reverse of any number using recursion.
#include<stdio.h>
#include<math.h>
int reverse(int num);
void main()
{
	int num,rev;
	printf("Enter any number\n");
	scanf("%d",&num);
	rev=reverse(num);
	printf("Reverse of number=%d\n",rev);
}
int reverse(int num)
{
	int digit;
	digit=(int)log10(num);
	if(num==0)
		return 0;
	return ((num%10*pow(10,digit))+reverse(num/10));
}
	
