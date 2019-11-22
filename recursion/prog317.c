//Write a C program to find GCD (HCF) of two numbers using recursion.
#include<stdio.h>
int gcd(int a,int b);
void main()
{
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	HCF=gcd(num1,num2);
	printf("GCD of two numbers=%d\n",HCF);
}

int gcd(int a,int b)
{
	if(a==0)
		return a;
	if(a==1)
		return gcd(a%b);
}
